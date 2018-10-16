/*
 *         
 * $Id:$
 * 
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 *         
 *     
 * DO NOT EDIT THIS FILE!
 *
 */

#include <soc/types.h>
#include <soc/error.h>
#include <soc/portmod/portmod_internal.h>
#include <soc/portmod/portmod.h>
#include <soc/portmod/portmod_dispatch.h>

#ifdef PORTMOD_PM12X10_XGS_SUPPORT

#include <soc/portmod/pm12x10_xgs.h>

#include <soc/portmod/pm12x10.h>

__portmod__dispatch__t__ portmod_pm12x10_xgs_driver = {

    pm12x10_pm_interface_type_is_supported,
    pm12x10_xgs_pm_init,
    pm12x10_xgs_pm_destroy,
    pm12x10_xgs_port_attach,
    NULL, /* portmod_default_bus_update */
    NULL, /* portmod_pm_bypass_set */
    pm12x10_pm_core_info_get,
    NULL, /* portmod_pm_phys_get */
    pm12x10_xgs_port_detach,
    pm12x10_port_replace,
    pm12x10_port_enable_set,
    pm12x10_port_enable_get,
    pm12x10_port_interface_config_set,
    pm12x10_port_interface_config_get,
    pm12x10_port_default_interface_get,
    NULL, /* portmod_port_encoding_set */
    NULL, /* portmod_port_encoding_get */
    NULL, /* portmod_port_cl72_set */
    NULL, /* portmod_port_cl72_get */
    NULL, /* portmod_port_cl72_status_get */
    pm12x10_port_loopback_set,
    pm12x10_port_loopback_get,
    pm12x10_port_rx_mac_enable_set,
    pm12x10_port_rx_mac_enable_get,
    pm12x10_port_tx_mac_enable_set,
    pm12x10_port_tx_mac_enable_get,
    pm12x10_port_ability_local_get,
    pm12x10_port_autoneg_set,
    pm12x10_port_autoneg_get,
    pm12x10_port_autoneg_status_get,
    pm12x10_port_link_get,
    NULL, /* portmod_port_link_latch_down_get */
    pm12x10_port_phy_link_up_event,
    pm12x10_port_phy_link_down_event,
    pm12x10_port_prbs_config_set,
    pm12x10_port_prbs_config_get,
    pm12x10_port_prbs_enable_set,
    pm12x10_port_prbs_enable_get,
    pm12x10_port_prbs_status_get,
    NULL, /* portmod_port_nof_lanes_get */
    NULL, /* portmod_port_ilkn_nof_segments_set */
    NULL, /* portmod_port_ilkn_nof_segments_get */
    NULL, /* portmod_ilkn_retranstmit_config_set */
    NULL, /* portmod_ilkn_retranstmit_config_get */
    NULL, /* portmod_port_lanes_assign */
    NULL, /* portmod_port_lanes_retrieve */
    pm12x10_port_firmware_mode_set,
    pm12x10_port_firmware_mode_get,
    pm12x10_port_runt_threshold_set,
    pm12x10_port_runt_threshold_get,
    pm12x10_port_max_packet_size_set,
    pm12x10_port_max_packet_size_get,
    pm12x10_port_pad_size_set,
    pm12x10_port_pad_size_get,
    pm12x10_port_tx_mac_sa_set,
    pm12x10_port_tx_mac_sa_get,
    NULL, /* portmod_port_rx_mac_sa_set */
    NULL, /* portmod_port_rx_mac_sa_get */
    pm12x10_port_tx_average_ipg_set,
    pm12x10_port_tx_average_ipg_get,
    NULL, /* portmod_port_tx_preamble_length_set */
    NULL, /* portmod_port_tx_preamble_length_get */
    pm12x10_port_local_fault_control_set,
    pm12x10_port_local_fault_control_get,
    pm12x10_port_remote_fault_control_set,
    pm12x10_port_remote_fault_control_get,
    pm12x10_port_local_fault_status_get,
    pm12x10_port_remote_fault_status_get,
    NULL, /* portmod_port_local_fault_status_clear */
    NULL, /* portmod_port_remote_fault_status_clear */
    pm12x10_port_pause_control_set,
    pm12x10_port_pause_control_get,
    pm12x10_port_pfc_control_set,
    pm12x10_port_pfc_control_get,
    pm12x10_port_llfc_control_set,
    pm12x10_port_llfc_control_get,
    pm12x10_port_update,
    pm12x10_port_core_access_get,
    pm12x10_port_phy_lane_access_get,
    pm12x10_port_duplex_set,
    pm12x10_port_duplex_get,
    pm12x10_port_phy_reg_read,
    pm12x10_port_phy_reg_write,
    pm12x10_port_reset_set,
    pm12x10_port_reset_get,
    pm12x10_port_adv_remote_get,
    NULL, /* portmod_port_drv_name */
    pm12x10_port_drv_name_get,
    NULL, /* portmod_port_fec_enable_set */
    NULL, /* portmod_port_fec_enable_get */
    pm12x10_port_ability_advert_set,
    pm12x10_port_ability_advert_get,
    pm12x10_port_ability_remote_get,
    pm12x10_port_frame_spacing_stretch_set,
    pm12x10_port_frame_spacing_stretch_get,
    pm12x10_port_diag_fifo_status_get,
    pm12x10_port_rx_control_set,
    pm12x10_port_rx_control_get,
    pm12x10_port_pfc_config_set,
    pm12x10_port_pfc_config_get,
    pm12x10_port_eee_set,
    pm12x10_port_eee_get,
    pm12x10_port_eee_clock_set,
    pm12x10_port_eee_clock_get,
    pm12x10_port_vlan_tag_set,
    pm12x10_port_vlan_tag_get,
    pm12x10_port_modid_set,
    NULL, /* portmod_port_led_chain_config */
    pm12x10_port_clear_rx_lss_status_set,
    pm12x10_port_clear_rx_lss_status_get,
    pm12x10_xphy_lane_attach_to_pm,
    pm12x10_xphy_lane_detach_from_pm,
    NULL, /* portmod_ext_phy_lane_attach_to_pm */
    NULL, /* portmod_ext_phy_lane_detach_from_pm */
    pm12x10_port_lag_failover_status_toggle,
    pm12x10_port_lag_failover_loopback_set,
    pm12x10_port_lag_failover_loopback_get,
    pm12x10_port_mode_set,
    pm12x10_port_mode_get,
    pm12x10_port_encap_set,
    pm12x10_port_encap_get,
    pm12x10_port_higig_mode_set,
    pm12x10_port_higig_mode_get,
    pm12x10_port_higig2_mode_set,
    pm12x10_port_higig2_mode_get,
    pm12x10_port_config_port_type_set,
    pm12x10_port_config_port_type_get,
    pm12x10_port_trunk_hwfailover_config_set,
    pm12x10_port_trunk_hwfailover_config_get,
    pm12x10_port_trunk_hwfailover_status_get,
    pm12x10_port_diag_ctrl,
    pm12x10_port_ref_clk_get,
    pm12x10_port_lag_failover_disable,
    pm12x10_port_lag_remove_failover_lpbk_set,
    pm12x10_port_lag_remove_failover_lpbk_get,
    pm12x10_port_cntmaxsize_set,
    pm12x10_port_cntmaxsize_get,
    pm12x10_port_multi_get,
    pm12x10_port_drain_cell_get,
    pm12x10_port_drain_cell_stop,
    pm12x10_port_drain_cell_start,
    pm12x10_port_drain_cells_rx_enable,
    pm12x10_port_egress_queue_drain_rx_en,
    pm12x10_port_mac_ctrl_set,
    pm12x10_port_txfifo_cell_cnt_get,
    pm12x10_port_egress_queue_drain_get,
    pm12x10_port_mac_reset_set,
    pm12x10_port_soft_reset_toggle,
    pm12x10_port_mac_reset_check,
    pm12x10_port_core_num_get,
    NULL, /* portmod_port_e2ecc_hdr_set */
    NULL, /* portmod_port_e2ecc_hdr_get */
    NULL, /* portmod_port_e2e_enable_set */
    NULL, /* portmod_port_e2e_enable_get */
    NULL, /* portmod_port_fallback_lane_get */
    pm12x10_port_speed_get,
    NULL, /* portmod_port_tsc_refclock_set */
    NULL, /* portmod_port_tsc_refclock_get */
    pm12x10_port_discard_set,
    pm12x10_port_soft_reset_set,
    pm12x10_port_tx_down,
    NULL, /* portmod_port_logical_lane_order_set */
    NULL, /* portmod_port_logical_lane_order_get */
    pm12x10_port_pgw_reconfig,
    pm12x10_port_notify,
    NULL, /* portmod_port_control_phy_timesync_set */
    NULL, /* portmod_port_control_phy_timesync_get */
    NULL, /* portmod_port_timesync_config_set */
    NULL, /* portmod_port_timesync_config_get */
    NULL, /* portmod_port_timesync_enable_set */
    NULL, /* portmod_port_timesync_enable_get */
    NULL, /* portmod_port_timesync_nco_addend_set */
    NULL, /* portmod_port_timesync_nco_addend_get */
    NULL, /* portmod_port_timesync_framesync_mode_set */
    NULL, /* portmod_port_timesync_framesync_mode_get */
    NULL, /* portmod_port_timesync_local_time_set */
    NULL, /* portmod_port_timesync_local_time_get */
    NULL, /* portmod_port_timesync_load_ctrl_set */
    NULL, /* portmod_port_timesync_load_ctrl_get */
    NULL, /* portmod_port_timesync_tx_timestamp_offset_set */
    NULL, /* portmod_port_timesync_tx_timestamp_offset_get */
    NULL, /* portmod_port_timesync_rx_timestamp_offset_set */
    NULL, /* portmod_port_timesync_rx_timestamp_offset_get */
    NULL, /* portmod_port_phy_intr_enable_set */
    NULL, /* portmod_port_phy_intr_enable_get */
    NULL, /* portmod_port_phy_intr_status_get */
    NULL, /* portmod_port_phy_intr_status_clear */
    NULL, /* portmod_port_phy_timesync_do_sync */
    NULL, /* portmod_port_timesync_capture_timestamp_get */
    NULL, /* portmod_port_timesync_heartbeat_timestamp_get */
    NULL, /* portmod_port_edc_config_set */
    NULL, /* portmod_port_edc_config_get */
    pm12x10_xgs_port_interrupt_enable_set,
    pm12x10_xgs_port_interrupt_enable_get,
    pm12x10_xgs_port_interrupt_get,
    pm12x10_xgs_port_interrupts_get,
    pm12x10_port_check_legacy_phy,
    pm12x10_port_failover_mode_set,
    pm12x10_port_failover_mode_get,
    pm12x10_port_mac_rsv_mask_set,
    pm12x10_port_mib_reset_toggle,
    pm12x10_port_warmboot_db_restore,
    pm12x10_port_flow_control_set,
    pm12x10_port_update_dynamic_state,
    pm12x10_port_phy_op_mode_get,
    pm12x10_port_lane_map_set,
    pm12x10_port_lane_map_get,
    NULL, /* portmod_port_polarity_set */
    NULL, /* portmod_port_polarity_get */
    pm12x10_port_medium_config_set,
    pm12x10_port_medium_config_get,
    pm12x10_port_medium_get,
    NULL, /* portmod_pm_is_in_pm12x10 */
    NULL, /* portmod_slow_read_rate_set */
    NULL, /* portmod_port_pll_div_get */
    NULL, /* portmod_port_master_get */
    pm12x10_port_lane_count_get,
};

#endif /* PORTMOD_PM12X10_XGS_SUPPORT */