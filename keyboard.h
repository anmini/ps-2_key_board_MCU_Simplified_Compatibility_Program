//*保存通码断码和按键的映射*//
#define break_codes 0xf0

#define _A_ 0X1C
#define _B_ 0X32
#define _C_ 0X21
#define _D_ 0X23
#define _E_ 0X24
#define _F_ 0X2B
#define _G_ 0X34
#define _H_ 0X33
#define _I_ 0X43
#define _J_ 0X3B
#define _K_ 0X42
#define _L_ 0X4B
#define _M_ 0X3A
#define _N_ 0X31
#define _O_ 0X44
#define _P_ 0X4D
#define _Q_ 0X15
#define _R_ 0X2D
#define _S_ 0X1B
#define _T_ 0X2C
#define _U_ 0X3C
#define _V_ 0X2A
#define _W_ 0X1D
#define _X_ 0X22
#define _Y_ 0X35
#define _Z_ 0X1A

#define _0_ 0X45
#define _1_ 0X16
#define _2_ 0X1E
#define _3_ 0X26
#define _4_ 0X25
#define _5_ 0X2E
#define _6_ 0X36
#define _7_ 0X3D
#define _8_ 0X3E
#define _9_ 0X46

#define _NUM_LOCK_ 0X77
#define _0_S 0X70
#define _1_S 0X69
#define _2_S 0X72
#define _3_S 0X7A
#define _4_S 0X6B
#define _5_S 0X73
#define _6_S 0X74
#define _7_S 0X6C
#define _8_S 0X75
#define _9_S 0X7D
#define _PLUS_SIGN_S     0X79
#define _MINUS_SIGN_S    0X7B
#define _MULTIPLE_SIGN_S 0X7B
#define _DIVISION_SIGN_S 0XEO4a
#define _POINT_S         0X71
#define _ENTER_S         0X5A

#define _MINUS_SIGN_     0X4E
#define _EQUAILTY_SIGN_  0X55
#define _ANTI_CAESURA_   0X0E
#define _CAESURA_        0X52
#define _SEMICOLON_      0X4C
#define _SPRIT_          0X5D
#define _DIVISION_SIGN_  0X4a
#define _COMMA_          0X41
#define _POINT_          0X49
#define _ESC_         0X76
#define _ENTER_       0X5A
#define _BACK_SPACE_  0X66
#define _SPACE_       0X29     
#define _TAB_         0X0D
#define _CAPS_        0X58

#define _INSERT_      0XE070
#define _HOME_        0XE06C
#define _PGUP_        0XE07D
#define _PGDN_        0XE07A
#define _END_         0XE069
#define _DELETE_      0XE071
#define _PRTSCR_      0XE012E07C
#define _SCRLOCK_     0X7E

#define _PAUSE_H      0XE11477E1
#define _PAUSE_L      0XF014F077

#define _L_SHIFT_     0X12
#define _L_CTRL_      0X14
#define _L_GUI_       0XE01F
#define _L_ALT_       0X11
#define _R_SHIFT_     0X59
#define _R_CTRL_      0XE014
#define _R_GUI_       0XEO27
#define _R_ALT_       0XEO11
#define _APPS_        0XE02F

#define _WAKE_UP_     0XE05E
#define _SLEEP_       0XE03F
#define _POWER_       0XE037

#define _UP_          0X0E75
#define _DOWN_        0X0E72
#define _LEFT_        0X0E6B
#define _RIGHT_       0X0E74

void ps_2_keyboard(void);
