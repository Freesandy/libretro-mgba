#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include "libretro.h"

/*
 ********************************
 * VERSION: 1.3
 ********************************
 *
 * - 1.3: Move translations to libretro_core_options_intl.h
 *        - libretro_core_options_intl.h includes BOM and utf-8
 *          fix for MSVC 2010-2013
 *        - Added HAVE_NO_LANGEXTRA flag to disable translations
 *          on platforms/compilers without BOM support
 * - 1.2: Use core options v1 interface when
 *        RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION is >= 1
 *        (previously required RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION == 1)
 * - 1.1: Support generation of core options v0 retro_core_option_value
 *        arrays containing options with a single value
 * - 1.0: First commit
*/

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/

/* RETRO_LANGUAGE_JAPANESE */

/* RETRO_LANGUAGE_FRENCH */

/* RETRO_LANGUAGE_SPANISH */

/* RETRO_LANGUAGE_GERMAN */

/* RETRO_LANGUAGE_ITALIAN */

struct retro_core_option_definition option_defs_it[] = {
   {
      "mgba_solar_sensor_level",
      "Livello Sensore Solare",
      "Imposta l'intensità solare dell'ambiente. Può essere usato dai giochi che includono un sensore solare nelle loro cartucce, es.: la serie Boktai.",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_allow_opposing_directions",
      "Permetti Input Direzionali Opposti",
      "Attivando questa funzionalità ti permette di premere / alternare velocemente / tenere premuti entrambe le direzioni destra e sinistra (oppure su e giù) allo stesso momento. Potrebbe causare dei glitch di movimento.",
      {
         { "no",  "Disabilitato" },
         { "yes", "Abilitato" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_gb_model",
      "Modello Game Boy (richiede riavvio)",
      "Esegue il contenuto caricato con un modello specifico di Game Boy. 'Rivela Automaticamente' selezionerà il modello più appropriato per il gioco attuale.",
      {
         { "Autodetect",       "Rivela Automaticamente" },
         { "Game Boy",         NULL },
         { "Super Game Boy",   NULL },
         { "Game Boy Color",   NULL },
         { "Game Boy Advance", NULL },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      "Usa il File BIOS se Presente (richiede riavvio)",
      "Usa il BIOS/bootloader ufficiale per hardware emulato, se presente nella cartella di sistema di RetroArch.",
      {
         { "ON",  NULL },
         { "OFF", NULL },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      "Salta Intro BIOS (richiede riavvio)",
      "Salta il filmato del logo di avvio se si usa un BIOS/bootloader ufficiale. Questa impostazione è ignorata se 'Usa il file BIOS se presente' è disabilitato.",
      {
         { "OFF", NULL },
         { "ON",  NULL },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_sgb_borders",
      "Utilizza i Bordi Super Game Boy (richiede riavvio)",
      "Visualizza i bordi del Super Game Boy quando apri un gioco potenziato dal Super Game Boy.",
      {
         { "ON",  NULL },
         { "OFF", NULL },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_idle_optimization",
      "Rimozione Idle Loop",
      "Riduce il carico del sistema ottimizzando gli 'idle-loops' - sezione del codice dove non accade nulla, ma la CPU lavora a velocità massima. Migliora le prestazioni, è consigliato abilitarlo su hardware di bassa fascia.",
      {
         { "Remove Known",      "Rimuovi Conosciuti" },
         { "Detect and Remove", "Rileva e Rimuovi" },
         { "Don't Remove",      "Non Rimuovere" },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      "Salta Frame",
      "Salta dei frame per migliorare le prestazioni a costo della fluidità dell'immagine. Il valore impostato qui è il numero dei frame rimosso dopo che un frame sia stato renderizzato - ovvero '0' = 60fps, '1' = 30fps, '2' = 15fps, ecc.",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      "Correzione Colore",
      "Regola i colori per corrispondere lo schermo di GBA/GBC reali.",
      {
         { "OFF",  NULL },
         { "GBA",  "Game Boy Advance" },
         { "GBC",  "Game Boy Color" },
         { "Auto", NULL },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   { NULL, NULL, NULL, {{0}}, NULL },
};

/* RETRO_LANGUAGE_DUTCH */

/* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */

/* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */

/* RETRO_LANGUAGE_RUSSIAN */

/* RETRO_LANGUAGE_KOREAN */

/* RETRO_LANGUAGE_CHINESE_TRADITIONAL */

/* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */

struct retro_core_option_definition option_defs_chs[] = {
   {
      "mgba_solar_sensor_level",
      "光线传感器级别",
      "设置环境光强度。\n"
      "可以在卡带上有光线传感器的游戏上使用，例如《我们的太阳》系列。",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_allow_opposing_directions",
      "允许相反方向输入",
      "允许同时按下/快速切换/同时按住左右或者上下方向键，这可能会引起移动方面的问题。",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_gb_model",
      "Game Boy型号（须重启）",
      "使用指定的Game Boy型号运行游戏。\n"
      "'自动检测'会为当前游戏选择最适合的型号。",
      {
         { "Autodetect",       "自动检测" },
         { "Game Boy",         NULL },
         { "Super Game Boy",   NULL },
         { "Game Boy Color",   NULL },
         { "Game Boy Advance", NULL },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      "使用BIOS文件（须重启）",
      "使用官方BIOS/引导程序，如果在RetroArch系统目录下有的话。",
      {
         { "ON",  "启用" },
         { "OFF", "禁用" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      "跳过BIOS启动画面（须重启）",
      "使用官方BIOS/引导程序时，跳过启动标题画面。\n"
      "'使用BIOS文件（须重启）'禁用时，此项忽略。",
      {
         { "OFF", "禁用" },
         { "ON",  "启用" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_sgb_borders",
      "使用Super Game Boy边框（须重启）",
      "运行Super Game Boy增强游戏时，显示Super Game Boy边框。",
      {
         { "ON",  "启用" },
         { "OFF", "禁用" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_idle_optimization",
      "移除空循环",
      "缩短系统载入时间，通过优化'空循环' - 这些代码不做任何事，但是CPU全速运转（类似汽车的空档运转）。\n"
      "此项可以提升性能，在低端设备上应该启用。",
      {
         { "Remove Known",      "移除已知代码" },
         { "Detect and Remove", "检测并移除" },
         { "Don't Remove",      "不移除" },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      "跳帧",
      "跳过一定帧数，以改善性能，代价是牺牲画面流畅度。\n"
      "这里设置的值是每渲染一帧后跳过的帧数 - 即'0' = 60fps，'1' = 30fps，'2' = 20fps，以此类推。",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      "色彩校正",
      "调整输出色彩以匹配真实GBA/GBC的显示效果。",
      {
         { "OFF",  "禁用" },
         { "GBA",  "Game Boy Advance" },
         { "GBC",  "Game Boy Color" },
         { "Auto", "自动" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      "帧间混合",
      "模拟LCD屏幕鬼影效果。\n"
      "'简单'以50:50比例混合当前帧和上一帧。'只能'尝试检测屏幕闪烁，只对受影响的像素进行50:50混合。\n"
      "'LCD鬼影'通过混合多个缓冲帧来模拟原生LCD响应时间。\n"
      "'简单'或'智能'是某些运行游戏必需的，这些游戏通过主动激发LCD鬼影来实现透明特效（Wave Race, Chikyuu Kaihou Gun ZAS, F-Zero, the Boktai series...）",
      {
         { "OFF",               "禁用" },
         { "mix",               "简单（精确）" },
         { "mix_fast",          "简单（快速）" },
         { "mix_smart",         "智能（精确）" },
         { "mix_smart_fast",    "智能（快速）" },
         { "lcd_ghosting",      "LCD鬼影（精确）" },
         { "lcd_ghosting_fast", "LCD鬼影（快速）" },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   { NULL, NULL, NULL, {{0}}, NULL },
};

/* RETRO_LANGUAGE_ESPERANTO */

/* RETRO_LANGUAGE_POLISH */

/* RETRO_LANGUAGE_VIETNAMESE */

/* RETRO_LANGUAGE_ARABIC */

/* RETRO_LANGUAGE_GREEK */

/* RETRO_LANGUAGE_TURKISH */

struct retro_core_option_definition option_defs_tr[] = {
   {
      "mgba_solar_sensor_level",
      "Güneş Sensörü Seviyesi",
      "Ortam güneş ışığının yoğunluğunu ayarlar. Boktai serisi, kartuşlarına güneş sensörü içeren oyunlar tarafından kullanılabilir.",
      {
         { "sensor",  "Sensörü" },
         { "0",       NULL },
         { "1",       NULL },
         { "2",       NULL },
         { "3",       NULL },
         { "4",       NULL },
         { "5",       NULL },
         { "6",       NULL },
         { "7",       NULL },
         { "8",       NULL },
         { "9",       NULL },
         { "10",      NULL },
         { NULL,      NULL },
      },
      "0"
   },
   {
      "mgba_allow_opposing_directions",
      "Karşı Yönlü Girdiye Çıkmaya İzin Ver",
      "Bunu etkinleştirmek aynı anda hem sola hem de sağa (veya yukarı ve aşağı) yönlere basma / hızlı değiştirme / tutma imkanı sağlar. Bu harekete dayalı hatalara neden olabilir.",
      {
         { "no",  "Devre dışı bırak" },
         { "yes", "Etkileştir" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_gb_model",
      "Game Boy Modeli (yeniden başlatma gerektirir)",
      "Yüklenen içeriği belirli bir Game Boy modeliyle çalıştırır. 'Otomatik Tespit' mevcut oyun için en uygun modeli seçecektir.",
      {
         { "Autodetect",       "Otomatik Tespit" },
         { "Game Boy",         NULL },
         { "Super Game Boy",   NULL },
         { "Game Boy Color",   NULL },
         { "Game Boy Advance", NULL },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      "Bulunursa BIOS Dosyasını kullanın (yeniden başlatma gerektirir)",
      "RetroArch'ın sistem dizininde varsa, öykünülmüş donanım için resmi BIOS/önyükleyici kullanır.",
      {
         { "ON",  "AÇIK" },
         { "OFF", "KAPALI" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      "BIOS Girişini Atla (yeniden başlatma gerektirir)",
      "Resmi bir BIOS / önyükleyici kullanırken, başlangıç logosu animasyonunu atlayın. Bu ayar, 'Bulunursa BIOS Dosyasını Kullan' devre dışı bırakıldığında geçersiz sayılır.",
      {
         { "OFF", "HAYIR" },
         { "ON",  "AÇIK" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_sgb_borders",
      "Super Game Boy Sınırlarını kullanın (yeniden başlatma gerekir)",
      "Super Game Boy gelişmiş oyunlarını çalıştırırken Super Game Boy sınırlarını görüntüleR.",
      {
         { "ON",  "AÇIK" },
         { "OFF", "KAPALI" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_idle_optimization",
      "Boşta Döngü Kaldırma",
      "'Boşta döngüler' denilen sistemi optimize ederek sistem yükünü azaltın - hiçbir şeyin olmadığı koddaki bölümler için, CPU tam hızda çalıştırır (boşa dönen bir araba gibi). Performansı arttırır ve düşük kaliteli donanımlarda etkinleştirilmesi gerekir.",
      {
         { "Remove Known",      "Bilinenleri Kaldır" },
         { "Detect and Remove", "Algıla ve Kaldır" },
         { "Don't Remove",      "Kaldırma" },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      "Kare atlama",
      "Görsel pürüzsüzlük pahasına performansı artırmak için çerçeveleri atlayın. Burada ayarlanan değer, bir kare oluşturulduktan sonra atlanan kare sayısıdır - yani '0' = 60fps, '1' = 30fps, '2' = 15fps, vb.",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      "Renk Düzeltmesi",
      "Çıktı renklerini gerçek GBA / GBC donanımının görüntüsüyle eşleşecek şekilde ayarlar.",
      {
         { "OFF",  "KAPALI" },
         { "GBA",  "Game Boy Advance" },
         { "GBC",  "Game Boy Color" },
         { "Auto", "Otomatik" },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   { NULL, NULL, NULL, {{0}}, NULL },
};

#ifdef __cplusplus
}
#endif

#endif
