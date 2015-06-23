using System;
using System.Collections;
using UnityEngine;

namespace ADHD
{
    public class DragRigidbody : MonoBehaviour
    {
        const float k_Spring = 50.0f;
        const float k_Damper = 5.0f;
        const float k_Drag = 10.0f;
        const float k_AngularDrag = 5.0f;
        const float k_Distance = 0.2f;
        const bool k_AttachToCenterOfMass = false;

        private SpringJoint2D m_SpringJoint;

		void start() {

		}

        private void Update()
        {
            // Make sure the user pressed the mouse down
            if (!Input.GetMouseButtonDown(0))
            {
                return;
            }

            var mainCamera = FindCamera();

            // We need to actually hit an object
			RaycastHit2D hit = Physics2D.Raycast (mainCamera.ScreenPointToRay (Input.mousePosition).origin,
			                                     mainCamera.ScreenPointToRay (Input.mousePosition).direction);
            if (!hit)
            {
				print ("We need to actually hit an object");
                return;
            }
            // We need to hit a rigidbody that is not kinematic
            if (!hit.rigidbody || hit.rigidbody.isKinematic)
            {
				print ("We need to hit a rigidbody that is not kinematic! ");
                return;
            }

            if (!m_SpringJoint)
            {
                var go = new GameObject("Rigidbody dragger");
                Rigidbody2D body = go.AddComponent<Rigidbody2D>();
                m_SpringJoint = go.AddComponent<SpringJoint2D>();
                body.isKinematic = true;
            }

            m_SpringJoint.transform.position = hit.point;
            m_SpringJoint.anchor = Vector2.zero;

            m_SpringJoint.frequency = k_Spring;
            m_SpringJoint.dampingRatio = k_Damper;
            m_SpringJoint.distance = k_Distance;
			m_SpringJoint.connectedBody = hit.rigidbody;
			m_SpringJoint.connectedAnchor = hit.point - m_SpringJoint.connectedBody.position;

            StartCoroutine("DragObject", hit.distance);
			print (
				"\njoint anchor: " + m_SpringJoint.connectedAnchor +
				"\nHit Position: " + hit.point + 
				"\nObj Position: " + m_SpringJoint.connectedBody.position +
				"\n  Hit Anchor: " + m_SpringJoint.anchor
				);
        }


        private IEnumerator DragObject(float distance)
        {
            var oldDrag = m_SpringJoint.connectedBody.drag;
            var oldAngularDrag = m_SpringJoint.connectedBody.angularDrag;
            m_SpringJoint.connectedBody.drag = k_Drag;
            m_SpringJoint.connectedBody.angularDrag = k_AngularDrag;
            var mainCamera = FindCamera();
            while (Input.GetMouseButton(0))
            {
                var ray = mainCamera.ScreenPointToRay(Input.mousePosition);
                m_SpringJoint.transform.position = ray.GetPoint(distance);
                yield return null;
            }
            if (m_SpringJoint.connectedBody)
            {
                m_SpringJoint.connectedBody.drag = oldDrag;
                m_SpringJoint.connectedBody.angularDrag = oldAngularDrag;
                m_SpringJoint.connectedBody = null;
            }
        }


        private Camera FindCamera()
        {
            if (GetComponent<Camera>())
            {
                return GetComponent<Camera>();
            }

            return Camera.main;
        }
    }
}
