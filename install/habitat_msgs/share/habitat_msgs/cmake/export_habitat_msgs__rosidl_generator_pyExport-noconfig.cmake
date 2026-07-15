#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "habitat_msgs::habitat_msgs__rosidl_generator_py" for configuration ""
set_property(TARGET habitat_msgs::habitat_msgs__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(habitat_msgs::habitat_msgs__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libhabitat_msgs__rosidl_generator_py.so"
  IMPORTED_SONAME_NOCONFIG "libhabitat_msgs__rosidl_generator_py.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS habitat_msgs::habitat_msgs__rosidl_generator_py )
list(APPEND _IMPORT_CHECK_FILES_FOR_habitat_msgs::habitat_msgs__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libhabitat_msgs__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
