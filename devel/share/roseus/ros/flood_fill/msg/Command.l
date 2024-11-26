;; Auto-generated. Do not edit!


(when (boundp 'flood_fill::Command)
  (if (not (find-package "FLOOD_FILL"))
    (make-package "FLOOD_FILL"))
  (shadow 'Command (find-package "FLOOD_FILL")))
(unless (find-package "FLOOD_FILL::COMMAND")
  (make-package "FLOOD_FILL::COMMAND"))

(in-package "ROS")
;;//! \htmlinclude Command.msg.html


(defclass flood_fill::Command
  :super ros::object
  :slots (_type _value ))

(defmethod flood_fill::Command
  (:init
   (&key
    ((:type __type) "")
    ((:value __value) 0.0)
    )
   (send-super :init)
   (setq _type (string __type))
   (setq _value (float __value))
   self)
  (:type
   (&optional __type)
   (if __type (setq _type __type)) _type)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; string _type
    4 (length _type)
    ;; float32 _value
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _type
       (write-long (length _type) s) (princ _type s)
     ;; float32 _value
       (sys::poke _value (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _type
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _type (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; float32 _value
     (setq _value (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get flood_fill::Command :md5sum-) "8165a05b6e90580d5249802a83c873ea")
(setf (get flood_fill::Command :datatype-) "flood_fill/Command")
(setf (get flood_fill::Command :definition-)
      "string type
float32 value 
")



(provide :flood_fill/Command "8165a05b6e90580d5249802a83c873ea")


