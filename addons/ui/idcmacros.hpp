// macros
#define GRID_W (pixelW * pixelGrid)
#define GRID_H (pixelH * pixelGrid)
#define QUOTE(var1) #var1
#define CENTER_X(w) (safezoneX + (safezoneW - w) / 2)
#define CENTER_Y(h) (safezoneY + (safezoneH - h) / 2)
#define SPACING 1

#define MAP_ITEM_W 30
#define MAP_ITEM_H 40

#define LOADING_STEP_H 3
#define LOADING_STEP_W 80

// idc
#define IDC_MAPITEM_BACKGROUND 1
#define IDC_MAPITEM_PICTURE 2
#define IDC_MAPITEM_NAME 3
#define IDC_MAPITEM_SELECTINDICATOR 4
#define IDC_MAPITEM_AUTHOR 5

#define IDC_LOADINGITEM_NAME 2
#define IDC_LOADINGITEM_STEP_READWRP 3
#define IDC_LOADINGITEM_STEP_SATIMAGE 4
#define IDC_LOADINGITEM_STEP_HOUSES 5
#define IDC_LOADINGITEM_STEP_PREVIEWIMGE 6
#define IDC_LOADINGITEM_STEP_META 7
#define IDC_LOADINGITEM_STEP_DEM 8
#define IDC_LOADINGITEM_ERROR 9

#define IDC_LOADINGSTEP_PICTURE 1337
#define IDC_LOADINGSTEP_TEXT 133742

#define IDC_DIALOG_CONTENT 742123

#define IDC_CONFIG_CHECK_SAT 421
#define IDC_CONFIG_CHECK_HOUSES 422
#define IDC_CONFIG_CHECK_PREVIEW 423
#define IDC_CONFIG_CHECK_META 424
#define IDC_CONFIG_CHECK_DEM 425

#define IDC_DONE_TEXT 42