set(srcs
    "main.c"
    "app_display.c"
    "app_camera.c"
    "app_camera_common.c"
    "app_camera_sensor_ov2710.c"
    "app_preview.c"
)

set(include_dirs ".")

idf_component_register(
    SRCS ${srcs}
    INCLUDE_DIRS ${include_dirs}
    REQUIRES hw_init
)
