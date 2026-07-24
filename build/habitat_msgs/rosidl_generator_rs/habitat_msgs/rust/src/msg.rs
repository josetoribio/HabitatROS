#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to habitat_msgs__msg__HabitatSensor

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HabitatSensor {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature_c: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub humidity_percent: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_id: std::string::String,

}



impl Default for HabitatSensor {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HabitatSensor::default())
  }
}

impl rosidl_runtime_rs::Message for HabitatSensor {
  type RmwMsg = super::msg::rmw::HabitatSensor;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        temperature_c: msg.temperature_c,
        humidity_percent: msg.humidity_percent,
        sensor_id: msg.sensor_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      temperature_c: msg.temperature_c,
      humidity_percent: msg.humidity_percent,
        sensor_id: msg.sensor_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      temperature_c: msg.temperature_c,
      humidity_percent: msg.humidity_percent,
      sensor_id: msg.sensor_id.to_string(),
    }
  }
}


