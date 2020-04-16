//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Command*/	/*Update Interval*/	/*Update Signal*/
	{"cat /tmp/recordingicon 2>/dev/null",	0,	9},
	{"sound",	0,	5},
	{"cpuUsage",	1,	4},
	{"cpuTemp",	1,	4},
	{"memory",	1,	4},
	{"clock",	60,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost */dwmblocks/config.h !sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
