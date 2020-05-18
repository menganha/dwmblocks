//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/  /*Post String*/	/*Update Interval*/	/*Update Signal*/
    {" ", "~/scripts/i3_archUpdates", " ", 0, 11},

    {" ", "~/scripts/internet", " ", 10, 0},
	
	{"  ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", " ", 30, 0},

	{" ", "~/scripts/i3_volume"," ", 0, 10},

	{" ", "~/scripts/i3_backlight", " ", 0, 10},
	
	{" ", "~/scripts/i3_battery", " ", 10, 0},

//	{" ", "sensors | awk '/^temp1:/{print $2\" \"}'", "", 10,0},

	{" ", "~/scripts/clock", " ", 50, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
