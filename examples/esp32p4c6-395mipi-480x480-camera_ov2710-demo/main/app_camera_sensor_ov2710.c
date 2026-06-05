/*
 * SPDX-FileCopyrightText: 2024-2026 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include "app_camera_common.h"

#include "esp_err.h"
#include "sdkconfig.h"

static esp_err_t app_camera_ov2710_init_video_hw(void)
{
    return app_camera_init_mipi_csi_hw(CONFIG_APP_CAMERA_OV2710_MIPI_RESET_PIN,
                                       CONFIG_APP_CAMERA_OV2710_MIPI_PWDN_PIN);
}

static void app_camera_ov2710_apply_post_open_controls(int fd)
{
    app_camera_apply_common_controls(fd);
}

static const app_camera_sensor_ops_t s_app_camera_ov2710_ops = {
    .name = "OV2710",
    .init_video_hw = app_camera_ov2710_init_video_hw,
    .apply_post_open_controls = app_camera_ov2710_apply_post_open_controls,
};

const app_camera_sensor_ops_t *app_camera_get_ov2710_sensor_ops(void)
{
    return &s_app_camera_ov2710_ops;
}
