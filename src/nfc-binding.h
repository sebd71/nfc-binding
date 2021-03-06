#pragma once

#include <json-c/json.h>

#define AFB_BINDING_VERSION 2
#include <afb/afb-binding.h>

// Initializations
int init();

// Verbs
void verb_subscribe(struct afb_req req);
void verb_unsubscribe(struct afb_req req);
void verb_list_devices(struct afb_req req);
void verb_list_devices_capabilities(struct afb_req req);
void verb_start_polling(struct afb_req req);
void verb_stop_polling(struct afb_req req);
