/*
  fr-FR.h - localization for French - France for Sonoff-Tasmota

  Copyright (C) 2018  Olivier Francais

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _LANGUAGE_FR_FR_H_
#define _LANGUAGE_FR_FR_H_

/*************************** ATTENTION *******************************\
 *
 * Due to memory constraints only UTF-8 is supported.
 * To save code space keep text as short as possible.
 * Time and Date provided by SDK can not be localized (yet).
 * Use online command StateText to translate ON, OFF, HOLD and TOGGLE.
 * Use online command Prefix to translate cmnd, stat and tele.
 *
 * Updated until v6.1.1b
\*********************************************************************/

#define LANGUAGE_MODULE_NAME         // Enable to display "Module Generic" (ie Spanish), Disable to display "Generic Module" (ie English)

#define LANGUAGE_LCID 1036
// HTML (ISO 639-1) Language Code
#define D_HTML_LANGUAGE "fr"

// "2017-03-07T11:08:02" - ISO8601:2004
#define D_YEAR_MONTH_SEPARATOR "-"
#define D_MONTH_DAY_SEPARATOR "-"
#define D_DATE_TIME_SEPARATOR "T"
#define D_HOUR_MINUTE_SEPARATOR ":"
#define D_MINUTE_SECOND_SEPARATOR ":"

#define D_DAY3LIST "DimLunMarMerJeuVenSam"
#define D_MONTH3LIST "JanFevMarAvrMaiJunJulAutSepOctNovDec"

// Non JSON decimal separator
#define D_DECIMAL_SEPARATOR ","

// Common
#define D_ADMIN "Admin"
#define D_AIR_QUALITY "Qualité de l'Air"
#define D_AP "AP"                    // Access Point
#define D_AS "comme"
#define D_AUTO "AUTO"
#define D_BLINK "Blink"
#define D_BLINKOFF "BlinkOff"
#define D_BOOT_COUNT "Nombre de boot"
#define D_BRIGHTLIGHT "Luminosité"
#define D_BUTTON "Bouton"
#define D_BY "par"                    // Written by me
#define D_BYTES "Bytes"
#define D_CELSIUS "Celsius"
#define D_CO2 "Dioxyde de carbone"
#define D_CODE "code"                // Button code
#define D_COLDLIGHT "Froid"
#define D_COMMAND "Commande"
#define D_CONNECTED "Connecté"
#define D_COUNT "Compte"
#define D_COUNTER "Compteur"
#define D_CURRENT "Courant"          // As in Voltage and Current
#define D_DATA "Donnée"
#define D_DARKLIGHT "Sombre"
#define D_DEBUG "Debug"
#define D_DISABLED "Désactivé"
#define D_DISTANCE "Distance"
#define D_DNS_SERVER "Serveur DNS"
#define D_DONE "Fait"
#define D_DST_TIME "DST"
#define D_ECO2 "eCO2"
#define D_EMULATION "Émulation"
#define D_ENABLED "Activé"
#define D_ERASE "Effacer"
#define D_ERROR "Erreur"
#define D_FAHRENHEIT "Fahrenheit"
#define D_FAILED "Échoué"
#define D_FALLBACK "Secours"
#define D_FALLBACK_TOPIC "Topic de secours"
#define D_FALSE "Faux"
#define D_FILE "Fichier"
#define D_FREE_MEMORY "Mémoire libre"
#define D_FREQUENCY "Fréquence"
#define D_GAS "Gaz"
#define D_GATEWAY "Passerelle"
#define D_GROUP "Groupe"
#define D_HOST "Host"
#define D_HOSTNAME "Hostname"
#define D_HUMIDITY "Humidité"
#define D_ILLUMINANCE "Éclairement"
#define D_IMMEDIATE "immédiat"      // Button immediate
#define D_INDEX "Index"
#define D_INFO "Info"
#define D_INFRARED "Infra-rouge"
#define D_INITIALIZED "Initialisé"
#define D_IP_ADDRESS "Adresse IP"
#define D_LIGHT "Lumière"
#define D_LWT "LWT"
#define D_MODULE "Module"
#define D_MQTT "MQTT"
#define D_MULTI_PRESS "multi-pression"
#define D_NOISE "Bruit"
#define D_NONE "Aucun"
#define D_OFF "Arrêt"
#define D_OFFLINE "Déconnecté"
#define D_OK "Ok"
#define D_ON "Marche"
#define D_ONLINE "Connecté"
#define D_PASSWORD "Mot de passe"
#define D_PORT "Port"
#define D_POWER_FACTOR "Facteur de puissance"
#define D_POWERUSAGE "Puissance"
#define D_POWERUSAGE_ACTIVE "Puissance Active"
#define D_POWERUSAGE_APPARENT "Puissance Apparente"
#define D_POWERUSAGE_REACTIVE "Puissance Réactive"
#define D_PRESSURE "Pression"
#define D_PRESSUREATSEALEVEL "PressionMer"
#define D_PROGRAM_FLASH_SIZE "Taille Flash Programme"
#define D_PROGRAM_SIZE "Taille programme"
#define D_PROJECT "Projet"
#define D_RECEIVED "Reçu"
#define D_RESTART "Redémarrage"
#define D_RESTARTING "Redémarre"
#define D_RESTART_REASON "Raison du redémarrage"
#define D_RESTORE "restaurer"
#define D_RETAINED "retenu"
#define D_RULE "Règle"
#define D_SAVE "Enregistrer"
#define D_SENSOR "Capteur"
#define D_SSID "SSID"
#define D_START "Lancer"	 // "Lancer la mise à jour"
#define D_STD_TIME "STD"
#define D_STOP "Stop"
#define D_SUBNET_MASK "Masque sous-réseau"
#define D_SUBSCRIBE_TO "Souscrire à"
#define D_SUCCESSFUL "Réussi"
#define D_SUNRISE "Lever du jour"
#define D_SUNSET "Tombée de la nuit"
#define D_TEMPERATURE "Température"
#define D_TO "à"
#define D_TOGGLE "Inverser"
#define D_TOPIC "Topic"      // Keep MQTT keyword
#define D_TRANSMIT "Transmettre"
#define D_TRUE "Vrai"
#define D_TVOC "TVOC"
#define D_UPGRADE "la mise à jour" 	 // "Lancer la mise à jour"
#define D_UPLOAD "Upload"    // Not better in french
#define D_UPTIME "Durée d'activité"
#define D_USER "Utilisateur"
#define D_UTC_TIME "UTC"
#define D_UV_INDEX "Indice UV"
#define D_UV_LEVEL "Niveau UV"
#define D_VERSION "Version"
#define D_VOLTAGE "Tension"
#define D_WARMLIGHT "Chaud"
#define D_WEB_SERVER "Serveur web"

// sonoff.ino
#define D_WARNING_MINIMAL_VERSION "ATTENTION Cette version ne supporte pas les réglages persistants"
#define D_LEVEL_10 "level 1-0"
#define D_LEVEL_01 "level 0-1"
#define D_SERIAL_LOGGING_DISABLED "Journalisation série désactivée"
#define D_SYSLOG_LOGGING_REENABLED "Jounalisation syslog réactivée"

#define D_SET_BAUDRATE_TO "Définir baudrate à"
#define D_RECEIVED_TOPIC "Topic reçu"  // Terme MQTT
#define D_DATA_SIZE "Taille données"
#define D_ANALOG_INPUT "Analogique"

// support.ino
#define D_OSWATCH "osWatch"
#define D_BLOCKED_LOOP "Boucle bloquée"
#define D_WPS_FAILED_WITH_STATUS "WPSconfig ÉCHOUÉ avec status"
#define D_ACTIVE_FOR_3_MINUTES "actif pour 3 minutes"
#define D_FAILED_TO_START "Échec de démarrage"
#define D_PATCH_ISSUE_2186 "Correction 2186"
#define D_CONNECTING_TO_AP "Connexion à l'AP"
#define D_IN_MODE "en mode"
#define D_CONNECT_FAILED_NO_IP_ADDRESS "Échec de connexion car aucune adresse IP n'a été reçue"
#define D_CONNECT_FAILED_AP_NOT_REACHED "Échec de connexion car l'AP ne peut-être contacté"
#define D_CONNECT_FAILED_WRONG_PASSWORD "Échec de connexion car le mot de passe de l'AP est incorrect"
#define D_CONNECT_FAILED_AP_TIMEOUT "Échec de connexion avec l'AP, expiré"
#define D_ATTEMPTING_CONNECTION "Tentative de connexion..."
#define D_CHECKING_CONNECTION "Vérification connexion..."
#define D_QUERY_DONE "Requête terminée. Services MQTT trouvés"
#define D_MQTT_SERVICE_FOUND "Service MQTT trouvé sur"
#define D_FOUND_AT "trouvé à"
#define D_SYSLOG_HOST_NOT_FOUND "Host syslog introuvable"

// settings.ino
#define D_SAVED_TO_FLASH_AT "Enregistré en flash à"
#define D_LOADED_FROM_FLASH_AT "Chargé de la flash à"
#define D_USE_DEFAULTS "Utiliser par défaut"
#define D_ERASED_SECTOR "Secteur effacé"

// xdrv_02_webserver.ino
#define D_MINIMAL_FIRMWARE_PLEASE_UPGRADE "Firmware MINIMAL - merci de mettre à jour"
#define D_WEBSERVER_ACTIVE_ON "Serveur web actif sur"
#define D_WITH_IP_ADDRESS "avec l'adresse IP"
#define D_WEBSERVER_STOPPED "Serveur web éteint"
#define D_FILE_NOT_FOUND "Fichier introuvable"
#define D_REDIRECTED "Redirection sur le portail captif"
#define D_WIFIMANAGER_SET_ACCESSPOINT_AND_STATION "Wifimanager définit AccessPoint et garde station"
#define D_WIFIMANAGER_SET_ACCESSPOINT "Wifimanager définit AccessPoint"
#define D_TRYING_TO_CONNECT "Tentative de connexion du module au réseau"

#define D_RESTART_IN "Redémarrage dans"
#define D_SECONDS "secondes"
#define D_DEVICE_WILL_RESTART "Le module va redémarrer dans quelques secondes"
#define D_BUTTON_TOGGLE "on/off"
#define D_CONFIGURATION "Configuration"
#define D_INFORMATION "Informations"
#define D_FIRMWARE_UPGRADE "Mise à jour du Firmware"
#define D_CONSOLE "Console"
#define D_CONFIRM_RESTART "Confirmer redémarrage"

#define D_CONFIGURE_MODULE "Configuration du Module"
#define D_CONFIGURE_MCP230XX "Configuration MCP230xx"
#define D_CONFIGURE_WIFI "Configuration WiFi"
#define D_CONFIGURE_MQTT "Configuration MQTT"
#define D_CONFIGURE_DOMOTICZ "Configuration Domoticz"
#define D_CONFIGURE_LOGGING "Configuration du journal"
#define D_CONFIGURE_OTHER "Autre configuration"
#define D_CONFIRM_RESET_CONFIGURATION "Confirmer réinitialisation configuration"
#define D_RESET_CONFIGURATION "Configuration par défaut"
#define D_BACKUP_CONFIGURATION "Sauvegarde de la config."
#define D_RESTORE_CONFIGURATION "Restauration de la config."
#define D_MAIN_MENU "Menu principal"

#define D_MODULE_PARAMETERS "Paramètres module"
#define D_MODULE_TYPE "Type de module"
#define D_GPIO "GPIO"
#define D_SERIAL_IN "Entrée série"
#define D_SERIAL_OUT "Sortie série"

#define D_WIFI_PARAMETERS "Paramètres Wifi"
#define D_SCAN_FOR_WIFI_NETWORKS "Scan des réseaux wifi"
#define D_SCAN_DONE "Scan terminé"
#define D_NO_NETWORKS_FOUND "Aucun réseau trouvé"
#define D_REFRESH_TO_SCAN_AGAIN "Rafraîchir pour scanner à nouveau"
#define D_DUPLICATE_ACCESSPOINT "Point d'Accès dupliqué"
#define D_SKIPPING_LOW_QUALITY "Évité car de mauvaise qualité"
#define D_RSSI "RSSI"
#define D_WEP "WEP"
#define D_WPA_PSK "WPA PSK"
#define D_WPA2_PSK "WPA2 PSK"
#define D_AP1_SSID "AP1 SSID"
#define D_AP1_PASSWORD "Mot de passe AP1"
#define D_AP2_SSID "AP2 SSId"
#define D_AP2_PASSWORD "Mot de passe AP2"

#define D_MQTT_PARAMETERS "Paramètres MQTT"
#define D_CLIENT "Client"
#define D_FULL_TOPIC "topic complet"

#define D_LOGGING_PARAMETERS "Paramètres du journal"
#define D_SERIAL_LOG_LEVEL "Niveau de journalisation série"
#define D_WEB_LOG_LEVEL "Niveau de journalisation web"
#define D_SYS_LOG_LEVEL "Niveau Syslog"
#define D_MORE_DEBUG "Plus de debug"
#define D_SYSLOG_HOST "Hôte Syslog"
#define D_SYSLOG_PORT "Port Syslog"
#define D_TELEMETRY_PERIOD "Période télémétrie"

#define D_OTHER_PARAMETERS "Autres paramètres"
#define D_WEB_ADMIN_PASSWORD "Mot de passe Web Admin"
#define D_MQTT_ENABLE "MQTT activé"
#define D_FRIENDLY_NAME "Surnom"
#define D_BELKIN_WEMO "Belkin WeMo"
#define D_HUE_BRIDGE "Hue Bridge"
#define D_SINGLE_DEVICE "module unique"
#define D_MULTI_DEVICE "multi module"

#define D_SAVE_CONFIGURATION "Enregistrer la configuration"
#define D_CONFIGURATION_SAVED "Configuration enregistrée"
#define D_CONFIGURATION_RESET "Configuration réinitialisée"

#define D_PROGRAM_VERSION "Version du programme"
#define D_BUILD_DATE_AND_TIME "Date & Heure de build"
#define D_CORE_AND_SDK_VERSION "Version Core/SDK"
#define D_FLASH_WRITE_COUNT "Compteur écriture flash"
#define D_MAC_ADDRESS "Adresse MAC"
#define D_MQTT_HOST "Hôte MQTT"
#define D_MQTT_PORT "Port MQTT"
#define D_MQTT_CLIENT "Client MQTT"
#define D_MQTT_USER "Utilisateur MQTT"
#define D_MQTT_TOPIC "Topic MQTT"
#define D_MQTT_GROUP_TOPIC "Groupe topic MQTT"
#define D_MQTT_FULL_TOPIC "Topic complet MQTT"
#define D_MDNS_DISCOVERY "Découverte mDNS"
#define D_MDNS_ADVERTISE "Annonce mDNS"
#define D_ESP_CHIP_ID "ESP Chip Id"
#define D_FLASH_CHIP_ID "Flash Chip Id"
#define D_FLASH_CHIP_SIZE "Taille flash"
#define D_FREE_PROGRAM_SPACE "Espace programme libre"

#define D_UPGRADE_BY_WEBSERVER "Mise à jour par serveur web"
#define D_OTA_URL "URL OTA"
#define D_START_UPGRADE "Lancer la mise à jour"
#define D_UPGRADE_BY_FILE_UPLOAD "Mise à jour par téléchargement fichier"
#define D_UPLOAD_STARTED "Téléchargement lancé"
#define D_UPGRADE_STARTED "Mise à jour lancée"
#define D_UPLOAD_DONE "Téléchargement terminé"
#define D_UPLOAD_ERR_1 "Aucun fichier sélectionné"
#define D_UPLOAD_ERR_2 "Espace insuffisant"
#define D_UPLOAD_ERR_3 "L'octet magique n'est pas 0xE9"
#define D_UPLOAD_ERR_4 "La taille du programme à flasher est plus grande que la taille réelle de la mémoire flash"
#define D_UPLOAD_ERR_5 "Erreur de comparaison du buffer de téléchargement"
#define D_UPLOAD_ERR_6 "Téléchargement échoué. Activer Weblog 3"
#define D_UPLOAD_ERR_7 "Téléchargement annulé"
#define D_UPLOAD_ERR_8 "Fichier invalide"
#define D_UPLOAD_ERR_9 "Fichier trop grand"
#define D_UPLOAD_ERR_10 "Erreur d'initialisation du chip RF"
#define D_UPLOAD_ERR_11 "Erreur d'effacement du chip RF"
#define D_UPLOAD_ERR_12 "Erreur d'accès en écriture au chip RF"
#define D_UPLOAD_ERR_13 "Erreur de décodage du firmware RF"
#define D_UPLOAD_ERROR_CODE "Code d'erreur téléchargement"

#define D_ENTER_COMMAND "Saisir une commande"
#define D_ENABLE_WEBLOG_FOR_RESPONSE "Activer Weblog 2 si une réponse est attendue"
#define D_NEED_USER_AND_PASSWORD "Nécessite utilisateur=<username>&password=<password>"

// xdrv_01_mqtt.ino
#define D_FINGERPRINT "Vérification d'empreinte TLS ..."
#define D_TLS_CONNECT_FAILED_TO "Échec de connexion TLS à"
#define D_RETRY_IN "Nouvelle tentative dans"
#define D_VERIFIED "Vérifié par empreinte "
#define D_INSECURE "Connexion non sécurisée car empreinte non vérifiée"
#define D_CONNECT_FAILED_TO "Échec de connexion à"

// xplg_wemohue.ino
#define D_MULTICAST_DISABLED "Multicast désactivé"
#define D_MULTICAST_REJOINED "Multicast (re)joint"
#define D_MULTICAST_JOIN_FAILED "Multicast échec abonnement"
#define D_FAILED_TO_SEND_RESPONSE "Échec d'envoi réponse"

#define D_WEMO "WeMo"
#define D_WEMO_BASIC_EVENT "WeMo basic event"
#define D_WEMO_EVENT_SERVICE "WeMo event service"
#define D_WEMO_META_SERVICE "WeMo meta service"
#define D_WEMO_SETUP "Réglage WeMo"
#define D_RESPONSE_SENT "Réponse envoyée"

#define D_HUE "Hue"
#define D_HUE_BRIDGE_SETUP "Réglage Hue"
#define D_HUE_API_NOT_IMPLEMENTED "API Hue non implémentée"
#define D_HUE_API "Hue API"
#define D_HUE_POST_ARGS "Hue POST args"
#define D_3_RESPONSE_PACKETS_SENT "3 paquets de réponse envoyés"

// xdrv_07_domoticz.ino
#define D_DOMOTICZ_PARAMETERS "Paramètres Domoticz"
#define D_DOMOTICZ_IDX "Idx"
#define D_DOMOTICZ_KEY_IDX "Key idx"
#define D_DOMOTICZ_SWITCH_IDX "Switch idx"
#define D_DOMOTICZ_SENSOR_IDX "Sensor idx"
  #define D_DOMOTICZ_TEMP "Temp"
  #define D_DOMOTICZ_TEMP_HUM "Temp,Hum"
  #define D_DOMOTICZ_TEMP_HUM_BARO "Temp,Hum,Baro"
  #define D_DOMOTICZ_POWER_ENERGY "Puissance,Énergie"
  #define D_DOMOTICZ_ILLUMINANCE "Illuminance"
  #define D_DOMOTICZ_COUNT "Compteur/PM1"
  #define D_DOMOTICZ_VOLTAGE "Tension/PM2,5"
  #define D_DOMOTICZ_CURRENT "Courant/PM10"
  #define D_DOMOTICZ_AIRQUALITY "Qualité de l'air"
#define D_DOMOTICZ_UPDATE_TIMER "Durée de rafraichissement"

// xdrv_09_timers.ino
#define D_CONFIGURE_TIMER "Configuration des Timers"
#define D_TIMER_PARAMETERS "Paramètres Timer"
#define D_TIMER_ARM "Armer"
#define D_TIMER_TIME "Temps"
#define D_TIMER_DAYS "Jours"
#define D_TIMER_REPEAT "Répéter"
#define D_TIMER_OUTPUT "Sortie"
#define D_TIMER_ACTION "Action"

// xdrv_10_knx.ino
#define D_CONFIGURE_KNX "Configuration de KNX"
#define D_KNX_PARAMETERS "Paramètres KNX"
#define D_KNX_GENERAL_CONFIG "Général"
#define D_KNX_PHYSICAL_ADDRESS "Adresse individuelle"				// Backbone/Line/Device -> Zone/Ligne/Participant
#define D_KNX_PHYSICAL_ADDRESS_NOTE "(Doit être unique sur le réseau KNX)"
#define D_KNX_ENABLE "Activer KNX"
#define D_KNX_GROUP_ADDRESS_TO_WRITE "Données à envoyer aux Adresses de Groupe"
#define D_ADD "Ajoûter"
#define D_DELETE "Supprimer"
#define D_REPLY "Répondre"
#define D_KNX_GROUP_ADDRESS_TO_READ "Données à recevoir des Adresses de Groupe"
#define D_LOG_KNX "KNX: "
#define D_RECEIVED_FROM "Reçu de"
#define D_KNX_COMMAND_WRITE "Écrire"
#define D_KNX_COMMAND_READ "Lire"
#define D_KNX_COMMAND_OTHER "Autre"
#define D_SENT_TO "envoyé à"
#define D_KNX_WARNING "L'Adresse de Groupe ( 0 / 0 / 0 ) est réservée et ne peut être utilisée."
#define D_KNX_ENHANCEMENT "Amélioration de la communication"
#define D_KNX_TX_SLOT "KNX TX"
#define D_KNX_RX_SLOT "KNX RX"

// xsns_03_energy.ino
#define D_ENERGY_TODAY "Énergie aujourd'hui"
#define D_ENERGY_YESTERDAY "Énergie hier"
#define D_ENERGY_TOTAL "Énergie totale"

// xsns_05_ds18b20.ino
#define D_SENSOR_BUSY "Capteur occupé"
#define D_SENSOR_CRC_ERROR "Erreur CRC capteur"
#define D_SENSORS_FOUND "Capteur trouvé"

// xsns_06_dht.ino
#define D_TIMEOUT_WAITING_FOR "Expiration du délai"
#define D_START_SIGNAL_LOW "Signal Start bas"
#define D_START_SIGNAL_HIGH "Signal Start haut"
#define D_PULSE "Impulsion"
#define D_CHECKSUM_FAILURE "Erreur checksum"

// xsns_07_sht1x.ino
#define D_SENSOR_DID_NOT_ACK_COMMAND "Le capteur n'a pas acquitté la commande"
#define D_SHT1X_FOUND "SHT1X found"

// xsns_18_pms5003.ino
#define D_STANDARD_CONCENTRATION "CF-1 PM"     // Standard Particle CF-1 Particle Matter
#define D_ENVIRONMENTAL_CONCENTRATION "PM"     // Environmetal Particle Matter
#define D_PARTICALS_BEYOND "Particules"

// sonoff_template.h
#define D_SENSOR_NONE     "Aucun"
#define D_SENSOR_DHT11    "DHT11"
#define D_SENSOR_AM2301   "AM2301"
#define D_SENSOR_SI7021   "SI7021"
#define D_SENSOR_DS18X20  "DS18x20"
#define D_SENSOR_I2C_SCL  "I2C SCL"
#define D_SENSOR_I2C_SDA  "I2C SDA"
#define D_SENSOR_WS2812   "WS2812"
#define D_SENSOR_IRSEND   "ÉmetIR"
#define D_SENSOR_SWITCH   "Inter."     // Suffix "1"
#define D_SENSOR_BUTTON   "Bouton"     // Suffix "1"
#define D_SENSOR_RELAY    "Relais"     // Suffix "1i"
#define D_SENSOR_LED      "LED"        // Suffix "1i"
#define D_SENSOR_PWM      "PWM"        // Suffix "1"
#define D_SENSOR_COUNTER  "Compteur"   // Suffix "1"
#define D_SENSOR_IRRECV   "RécptIR"
#define D_SENSOR_MHZ_RX   "MHZ Rx"
#define D_SENSOR_MHZ_TX   "MHZ Tx"
#define D_SENSOR_PZEM_RX  "PZEM Rx"
#define D_SENSOR_PZEM_TX  "PZEM Tx"
#define D_SENSOR_SAIR_RX  "SAir Rx"
#define D_SENSOR_SAIR_TX  "SAir Tx"
#define D_SENSOR_SPI_CS   "SPI CS"
#define D_SENSOR_SPI_DC   "SPI DC"
#define D_SENSOR_BACKLIGHT "RétroÉcl"
#define D_SENSOR_PMS5003  "PMS5003"
#define D_SENSOR_SDS0X1   "SDS0X1"
#define D_SENSOR_SBR_RX   "SerBr Rx"
#define D_SENSOR_SBR_TX   "SerBr Tx"
#define D_SENSOR_SR04_TRIG "SR04 Tri"
#define D_SENSOR_SR04_ECHO "SR04 Ech"
#define D_SENSOR_SDM120_TX "SDM120 Tx"
#define D_SENSOR_SDM120_RX "SDM120 Rx"
#define D_SENSOR_SDM630_TX "SDM630 Tx"
#define D_SENSOR_SDM630_RX "SDM630 Rx"
#define D_SENSOR_TM1638_CLK "TM16 CLK"
#define D_SENSOR_TM1638_DIO "TM16 DIO"
#define D_SENSOR_TM1638_STB "TM16 STB"

// Units
#define D_UNIT_AMPERE "A"
#define D_UNIT_CENTIMETER "cm"
#define D_UNIT_HERTZ "Hz"
#define D_UNIT_HOUR "h"
#define D_UNIT_KILOOHM "kΩ"
#define D_UNIT_KILOWATTHOUR "kWh"
#define D_UNIT_LUX "lx"
#define D_UNIT_MICROGRAM_PER_CUBIC_METER "µg/m3"
#define D_UNIT_MICROMETER "µm"
#define D_UNIT_MICROSECOND "µs"
#define D_UNIT_MILLIAMPERE "mA"
#define D_UNIT_MILLISECOND "ms"
#define D_UNIT_MINUTE "Min"
#define D_UNIT_PARTS_PER_BILLION "ppb"
#define D_UNIT_PARTS_PER_DECILITER "ppd"
#define D_UNIT_PARTS_PER_MILLION "ppm"
#define D_UNIT_PRESSURE "hPa"
#define D_UNIT_SECOND "sec"
#define D_UNIT_SECTORS "secteurs"
#define D_UNIT_VA "VA"
#define D_UNIT_VAR "VAr"
#define D_UNIT_VOLT "V"
#define D_UNIT_WATT "W"
#define D_UNIT_WATTHOUR "Wh"

// Log message prefix
#define D_LOG_APPLICATION "APP: "  // Application
#define D_LOG_BRIDGE "BRG: "       // Bridge
#define D_LOG_CONFIG "CFG: "       // Settings
#define D_LOG_COMMAND "CMD: "      // Command
#define D_LOG_DEBUG "DBG: "        // Debug
#define D_LOG_DHT "DHT: "          // DHT sensor
#define D_LOG_DOMOTICZ "DOM: "     // Domoticz
#define D_LOG_DSB "DSB: "          // DS18xB20 sensor
#define D_LOG_HTTP "HTP: "         // HTTP webserver
#define D_LOG_I2C "I2C: "          // I2C
#define D_LOG_IRR "IRR: "          // Infra Red Received
#define D_LOG_LOG "LOG: "          // Logging
#define D_LOG_MODULE "MOD: "       // Module
#define D_LOG_MDNS "DNS: "         // mDNS
#define D_LOG_MQTT "MQT: "         // MQTT
#define D_LOG_OTHER "OTH: "        // Other
#define D_LOG_RESULT "RSL: "       // Result
#define D_LOG_RFR "RFR: "          // RF Received
#define D_LOG_SERIAL "SER: "       // Serial
#define D_LOG_SHT1 "SHT: "         // SHT1x sensor
#define D_LOG_UPLOAD "UPL: "       // Upload
#define D_LOG_UPNP "UPP: "         // UPnP
#define D_LOG_WIFI "WIF: "         // Wifi

#endif  // _LANGUAGE_FR_FR_H_
