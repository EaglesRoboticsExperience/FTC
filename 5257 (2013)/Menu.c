int delay;
int currentLine;
bool menuRunning;
string autonomous[4];
string alliance[2];
string park[2];
int allianceLine;
int autoLine;
int parkLine;

void timer()
{
	if(currentLine == 0)
	{
		if(nNxtButtonPressed == 1)
		{
			delay += 1;
			if(delay == 21)
			{
				delay = 0;
			}
		}
		else if(nNxtButtonPressed == 2)
		{
			delay -= 1;
			if(delay == -1)
			{
				delay = 20;
			}
		}
		nxtDisplayTextLine(0, "*Delay: %d", delay);
	}
	else
	{
		nxtDisplayTextLine(0, " Delay: %d", delay);
	}
}

void navigateLines()
{
	if(nNxtButtonPressed == 3)
	{
		currentLine -= 1;
	}

	if(nNxtButtonPressed == 0)
	{
		currentLine += 1;
	}

	if(currentLine == 5)
	{
		currentLine = 0;
	}
	if(currentLine == -1)
	{
		currentLine = 4;
	}

	if(currentLine == 4)
	{
		if(nNxtButtonPressed == 1)
		{
			menuRunning = false;
		}
	}
}

void autonomousChooser()
{
	if(currentLine == 1)
	{
		if(nNxtButtonPressed == 1)
		{
			autoLine += 1;
			if(autoLine == 4)
			{
				autoLine = 0;
			}
		}
		nxtDisplayTextLine(1, "*Auto: %s", autonomous[autoLine]);
	}
	else
	{
		nxtDisplayTextLine(1, " Auto: %s", autonomous[autoLine]);
	}
}

void allainceChooser()
{
	if(currentLine == 3)
	{
		if(nNxtButtonPressed == 1)
		{
			allianceLine += 1;
			if(allianceLine == 2)
			{
				allianceLine = 0;
			}
		}
		nxtDisplayTextLine(3, "*Alliance: %s", alliance[allianceLine]);
	}
	else
	{
		nxtDisplayTextLine(3, " Alliance: %s", alliance[allianceLine]);
	}
}

void parkChooser()
{
	if(currentLine == 2)
	{
		if(nNxtButtonPressed == 1)
		{
			parkLine += 1;
			if(parkLine == 2)
			{
				parkLine = 0;
			}
		}
		nxtDisplayTextLine(2, "*Park: %s", park[parkLine]);
	}
	else
	{
		nxtDisplayTextLine(2, " Park: %s", park[parkLine]);
	}
}

void menuInit()
{
	nNxtExitClicks = 8;

	autoLine = 0;
	autonomous[0] = "Default";
	autonomous[1] = "Intake";
	autonomous[2] = "Corn Block";
	autonomous[3] = "Block";

	allianceLine = 0;
	alliance[0] = "Blue";
	alliance[1] = "Red";

	parkLine = 0;
	park[0] = "Near";
	park[1] = "Far";

	delay = 0;
	currentLine = 0;
	menuRunning = true;
}
