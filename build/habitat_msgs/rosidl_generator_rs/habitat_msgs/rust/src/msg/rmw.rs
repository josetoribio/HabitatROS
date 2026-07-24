#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "habitat_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__habitat_msgs__msg__HabitatSensor() -> *const std::ffi::c_void;
}

#[link(name = "habitat_msgs__rosidl_generator_c")]
extern "C" {
    fn habitat_msgs__msg__HabitatSensor__init(msg: *mut HabitatSensor) -> bool;
    fn habitat_msgs__msg__HabitatSensor__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HabitatSensor>, size: usize) -> bool;
    fn habitat_msgs__msg__HabitatSensor__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HabitatSensor>);
    fn habitat_msgs__msg__HabitatSensor__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HabitatSensor>, out_seq: *mut rosidl_runtime_rs::Sequence<HabitatSensor>) -> bool;
}

// Corresponds to habitat_msgs__msg__HabitatSensor
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HabitatSensor {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature_c: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub humidity_percent: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_id: rosidl_runtime_rs::String,

}



impl Default for HabitatSensor {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !habitat_msgs__msg__HabitatSensor__init(&mut msg as *mut _) {
        panic!("Call to habitat_msgs__msg__HabitatSensor__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HabitatSensor {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { habitat_msgs__msg__HabitatSensor__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { habitat_msgs__msg__HabitatSensor__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { habitat_msgs__msg__HabitatSensor__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HabitatSensor {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HabitatSensor where Self: Sized {
  const TYPE_NAME: &'static str = "habitat_msgs/msg/HabitatSensor";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__habitat_msgs__msg__HabitatSensor() }
  }
}


