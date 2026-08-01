# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_makerspet_snoopy_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED makerspet_snoopy_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(makerspet_snoopy_FOUND FALSE)
  elseif(NOT makerspet_snoopy_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(makerspet_snoopy_FOUND FALSE)
  endif()
  return()
endif()
set(_makerspet_snoopy_CONFIG_INCLUDED TRUE)

# output package information
if(NOT makerspet_snoopy_FIND_QUIETLY)
  message(STATUS "Found makerspet_snoopy: 0.0.0 (${makerspet_snoopy_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'makerspet_snoopy' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT makerspet_snoopy_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(makerspet_snoopy_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${makerspet_snoopy_DIR}/${_extra}")
endforeach()
