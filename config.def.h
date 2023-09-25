/* user and group to drop privileges to */
static const char *user  = "jayanth";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
  [INIT]   = "#1d2021", /* after initialization (Background) */
  [INPUT]  = "#458588", /* during input (Blue) */
  [FAILED] = "#fb4934"  /* wrong password (Red) */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Suckless: Software that sucks less.";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "-b&h-lucidatypewriter-medium-r-normal-sans-19-190-75-75-m-110-iso8859-15";
