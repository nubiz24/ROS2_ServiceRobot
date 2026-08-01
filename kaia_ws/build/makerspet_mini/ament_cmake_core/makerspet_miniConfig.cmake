# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_makerspet_mini_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED makerspet_mini_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(makerspet_mini_FOUND FALSE)
  elseif(NOT makerspet_mini_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(makerspet_mini_FOUND FALSE)
  endif()
  return()
endif()
set(_makerspet_mini_CONFIG_INCLUDED TRUE)

# output package information
if(NOT makerspet_mini_FIND_QUIETLY)
  message(STATUS "Found makerspet_mini: 0.0.0 (${makerspet_mini_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'makerspet_mini' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT makerspet_mini_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(makerspet_mini_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${makerspet_mini_DIR}/${_extra}")
endforeach()
