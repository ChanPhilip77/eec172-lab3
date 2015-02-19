// Global Variables

static int ball_xc = 64;	// ball x coordinate
static int ball_yc = 64;
const int paddle1_xc = 0;
static int paddle1_yc = 54;
const int paddle2_xc = 121;	//127 - 6
static int paddle2_yc = 54;

static int ball_pxc = 64;	// previous ball x coordinate
static int ball_pyx = 64;
static int paddle1_pyc = 54;
static int paddle2_pyc = 54;

static int x_speed = 1;
static int y_speed = 1;



// Setup

void oled_setup()
{
	char msg[12] = "Starting...\n";
	begin();
	fillScreen(BLACK);
	setTextColor(WHITE,BLACK);
	setTextSize(1);
	setCursor(24, 64);
	for (int i = 0;i < 12; i++)
	{
		write(msg[i]);
	}
	ROM_SysCtlDelay(ROM_SysCtlClockGet()/3);
	fillScreen(BLACK);
	fillCircle(ball_xc,ball_yc,2,WHITE);
	fillRect(paddle1_xc,paddle1_yc,6,20,WHITE);
	fillRect(paddle2_xc,paddle2_yc,6,20,WHITE);


}

