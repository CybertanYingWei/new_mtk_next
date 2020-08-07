#ifndef _CAPTIVE_H__
#define _CAPTIVE_H__

extern struct blob_buf c;

extern struct schema_Wifi_VIF_State vstate;
extern const struct schema_Wifi_VIF_Config *vconf;
extern void vif_captive_portal_set (const struct schema_Wifi_VIF_Config *vconf, char *ifname);
extern void vif_state_captive_portal_options_get (struct schema_Wifi_VIF_State *vstate, struct uci_section *s);
extern void captive_portal_init();

#endif
