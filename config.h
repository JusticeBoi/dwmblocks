//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Command*/	/*Update Interval*/	/*Update Signal*/
	/* {"cat /tmp/recordingicon 2>/dev/null",	0,	9}, */
	{"up_down_speed",	1,	11},
	{"pacpackages",	0,	10},
	{"sound",	0,	5},
	{"cpuUsage",	1,	4},
	{"cpuTemp",	1,	8},
	{"memory",	1,	7},
	{"clock",	60,	1},
	{"internet",	5,	6},
	{"disk",	15,	9},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost */dwmblocks/config.h !sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
