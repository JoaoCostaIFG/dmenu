/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;  // -b  option; if 0, dmenu appears at bottom
static int fuzzy  = 1;  // -F  option; if 0, dmenu doesn't use fuzzy matching
/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "monospace:weight=Bold:pixelsize=12";
static const char *fonts[]  = { font, "Symbola:pixelsize=12" };
static const char *prompt   = NULL; // -p  option; prompt to the left of input field
/* colors */
static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";
static char *colors[SchemeLast][2] = {
	/*                fg            bg          */
  [SchemeNorm] = {  normfgcolor,  normbgcolor },
  [SchemeSel]  = {  selfgcolor,   selbgcolor  },
  [SchemeOut]  = {  "#000000",    "#00ffff"   },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 25;  // -h option; minimum height of a menu line

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " /?\"'&[]";

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "normfgcolor", STRING, &normfgcolor },
	{ "normbgcolor", STRING, &normbgcolor },
	{ "selfgcolor",  STRING, &selfgcolor },
	{ "selbgcolor",  STRING, &selbgcolor },
};
