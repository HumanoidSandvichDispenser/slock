/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* enable blur */
#define BLUR

/* set blur radius */
static const int blurRadius = 4;

/* enable pixelation */
//#define PIXELATION

/* set pixelation radius */
static const int pixelSize = 0;

/* default message */
static const char *message = "Suckless: Software that sucks less.";

/* text color */
static const char *text_color = "#ffffff";

/* text size (must be a valid size) */
static const char *font_name = "6x13";

/* path to image (leave blank for screenshot of the current display) */
static const char *image_path = "";

/* gamma of the lock image (default = 0.5) */
static float image_gamma = 0.5;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "foreground",   STRING,  &text_color },
		{ "font",         STRING,  &font_name },
		{ "image",        STRING,  &image_path },
};
