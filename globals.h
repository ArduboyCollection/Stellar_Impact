Arduboy arduboy;
byte enemy_count = 0;
byte enemy_countdown_initial = 60;
byte enemy_countdown = enemy_countdown_initial;
byte star_count = 0;
byte star_countdown_initial_depth = 12;
byte star_countdown_depth = star_countdown_initial_depth;
byte star_countdown_depth1 = 2*star_countdown_initial_depth;
byte star_countdown_depth2 = 3*star_countdown_initial_depth;
byte player_x;
byte player_y;
byte player_HP = 3;
byte player_last_HP = player_HP;
byte player_inv_countdown = 0;
byte invincibility_length = 120;
byte death_countdown = 0;
boolean player_is_alive = true;
boolean gameBegun = false;
byte framecount = 0;
byte countdown;
byte bomb_countdown = 0;
byte bomb_num = 3;
byte shot_count = 0;
byte bx[21];
byte by[21];
bool timeGo = true;
short score = 0;
byte last_enem_spr = 0;
