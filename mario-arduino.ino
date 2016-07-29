/*
    Program made by Jared Grimes
    Made for MiBytes Hacking Camp

    Plz give credit if used publicly. This is literally all i did both weeks of the camp. Thanks!
 */

#include <bassdll.h>
#include <debug.h>
#include <LiquidCrystal.h>

#define EIGHTH 8
#define L 28
#define LONG 70

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void song(channel &melody, channel &harmony, channel &bass);
void intro(channel &melody, channel &harmony, channel &bass);
void ending(channel &melody, channel &harmony, channel &bass);
void underworld(channel &melody, channel &bass, channel &bbass);
void underwater(channel &melody, channel &harmony, channel &bass);

mixer m;
note** memblk;
channel pin6 (6,1); // defining "pin6", "pin7", and "pin8" as the pins 6, 7, and 8 on the arduino
channel pin7 (7,1);
channel pin8 (8,1);

void setup() {
  memblk = (note**) calloc(290,sizeof(note*)); // some required setup stuff, idk?
  if (memblk==NULL) debug(1111);

  m.add_channel(&pin6); // adds the pins we defined earlier to the three channels we're going to make: melody, harmony, and bass
  m.add_channel(&pin7);
  m.add_channel(&pin8);
 

}

void loop() {

    lcd.clear();
    lcd.begin(16, 2);
    lcd.print("Now Playing:");
    lcd.setCursor(0,1);
    lcd.print("Overworld Theme");
    
    {intro (pin6, pin7, pin8);} // these 4 queue the theme for the overworld
    {song (pin6, pin7, pin8);}
    {intro (pin6, pin7, pin8);}
    {ending (pin6, pin7, pin8);}

    lcd.clear();
    lcd.begin(16, 2);
    lcd.print("Now Playing:");
    lcd.setCursor(0,1);
    lcd.print("Underworld Theme");

    {underworld (pin6, pin7, pin8);} // queues underworld (repeats once)
    {underworld (pin6, pin7, pin8);}

    lcd.clear();
    lcd.begin(16, 2);
    lcd.print("Now Playing:");
    lcd.setCursor(0,1);
    lcd.print("Underwater Theme");

    {underwater (pin6, pin7, pin8);} // queues underwater (repeats once)
    {underwater (pin6, pin7, pin8);}
}

inline void underwater(channel &melody, channel &harmony, channel &bass){
  note rest;
  rest.tone = REST;
  rest.duration = L;

  note srest;
  srest.tone = REST;
  srest.duration = L / 2;

  note lrest;
  lrest.tone = REST;
  lrest.duration = 84 - LONG;

  note sc2;
  sc2.tone = -33;
  sc2.duration = L / 2;

  note sg2;
  sg2.tone = -26;
  sg2.duration = L / 2;

  note sa2;
  sa2.tone = -24;
  sa2.duration = L / 2;

  note sbb2;
  sbb2.tone = -23;
  sbb2.duration = L / 2;
  
  note sb2;
  sb2.tone = -22;
  sb2.duration = L / 2;

  note sc3;
  sc3.tone = -21;
  sc3.duration = L / 2;

  note lc3;
  lc3.tone = -21;
  lc3.duration = L * 2;

  note sdb3;
  sdb3.tone = -20;
  sdb3.duration = L / 2;

  note sd3;
  sd3.tone = -19;
  sd3.duration = L / 2;

  note se3;
  se3.tone = -17;
  se3.duration = L / 2;

  note sf3;
  sf3.tone = -16;
  sf3.duration = L / 2;

  note sgb3;
  sgb3.tone = -15;
  sgb3.duration = L / 2;

  note sg3;
  sg3.tone = -14;
  sg3.duration = L / 2;

  note lg3;
  lg3.tone = -14;
  lg3.duration = LONG;

  note sbb3;
  sbb3.tone = -11;
  sbb3.duration = L / 2;

  note sb3;
  sb3.tone = -10;
  sb3.duration = L / 2;

  note qb3;
  qb3.tone = -10;
  qb3.duration = L * 2;

  note b3;
  b3.tone = -10;
  b3.duration = L;

  note c4;
  c4.tone = -9;
  c4.duration = L;

  note sc4;
  sc4.tone = -9;
  sc4.duration = L / 2;

  note sdb4;
  sdb4.tone = -8;
  sdb4.duration = L / 2;

  note ldb4;
  ldb4.tone = -8;
  ldb4.duration = LONG;

  note db4;
  db4.tone = -8;
  db4.duration = L;

  note d4;
  d4.tone = -7;
  d4.duration = L;

  note ld4;
  ld4.tone = -7;
  ld4.duration = LONG;

  note sd4;
  sd4.tone = -7;
  sd4.duration = L / 2;

  note se4;
  se4.tone = -5;
  se4.duration = L / 2;

  note e4;
  e4.tone = -5;
  e4.duration = L;

  note le4;
  le4.tone = -5;
  le4.duration = LONG;

  note f4;
  f4.tone = -4;
  f4.duration = L;

  note sf4;
  sf4.tone = -4;
  sf4.duration = L / 2;

  note lf4;
  lf4.tone = -4;
  lf4.duration = LONG;

  note dotf4;
  dotf4.tone = -4;
  dotf4.duration = 5 * L / 2;

  note gb4;
  gb4.tone = -3;
  gb4.duration = L;

  note lgb4;
  lgb4.tone = -3;
  lgb4.duration = LONG;

  note qgb4;
  qgb4.tone = -3;
  qgb4.duration = L * 2;

  note qg4;
  qg4.tone = -2;
  qg4.duration = L * 2;

  note g4;
  g4.tone = -2;
  g4.duration = L;

  note sg4;
  sg4.tone = -2;
  sg4.duration = L / 2;

  note lg4;
  lg4.tone = -2;
  lg4.duration = LONG;

  note a4;
  a4.tone = 0;
  a4.duration = L;

  note sa4;
  sa4.tone = 0;
  sa4.duration = L / 2;

  note bb4;
  bb4.tone = 1;
  bb4.duration = L;

  note b4;
  b4.tone = 2;
  b4.duration = L;

  note sb4;
  sb4.tone = 2;
  sb4.duration = L / 2;

  note dotb4;
  dotb4.tone = 2;
  dotb4.duration = 5 * L / 2;

  note sc5;
  sc5.tone = 3;
  sc5.duration = L / 2;

  note lc5;
  lc5.tone = 3;
  lc5.duration = LONG;

  note ldb5;
  ldb5.tone = 4;
  ldb5.duration = LONG;

  note sdb5;
  sdb5.tone = 4;
  sdb5.duration = L / 2;

  note ld5;
  ld5.tone = 5;
  ld5.duration = LONG;
  
  note sd5;
  sd5.tone = 5;
  sd5.duration = L / 2;

  note qeb5;
  qeb5.tone = 6;
  qeb5.duration = L * 2;

  note leb5;
  leb5.tone = 6;
  leb5.duration = LONG;

  note le5;
  le5.tone = 7;
  le5.duration = LONG;

  note se5;
  se5.tone = 7;
  se5.duration = L / 2;

  note f5;
  f5.tone = 8;
  f5.duration = L;

  note lf5;
  lf5.tone = 8;
  lf5.duration = LONG;

  note sf5;
  sf5.tone = 8;
  sf5.duration = L / 2;

  note sg5;
  sg5.tone = 10;
  sg5.duration = L / 2;

  note g5;
  g5.tone = 10;
  g5.duration = L;

  note lg5;
  lg5.tone = 10;
  lg5.duration = LONG;

  note sa5;
  sa5.tone = 12;
  sa5.duration = L / 2;

  melody.notes = memblk; // THESE NOTE ALLOCS ARE VERY IMPORTANT. too little or too many causes the arduino to spazz out
  harmony.notes = melody.notes + 300;
  bass.notes = harmony.notes + 300;

     melody.realloc_notes();
     harmony.realloc_notes();
     bass.realloc_notes();

  melody.queue(&d4);
  melody.queue(&e4);
  melody.queue(&gb4);
  melody.queue(&g4);
  melody.queue(&a4);
  melody.queue(&bb4);

  harmony.queue(&d4);
  harmony.queue(&db4);
  harmony.queue(&c4);
  harmony.queue(&b3);
  harmony.queue(&c4);
  harmony.queue(&db4);

  bass.queue(&d4);
  bass.queue(&db4);
  bass.queue(&c4);
  bass.queue(&b3);
  bass.queue(&c4);
  bass.queue(&db4);




  melody.queue(&sb4);
  melody.queue(&sb4);
  melody.queue(&sb4);
  melody.queue(&srest);
  melody.queue(&sb4);
  melody.queue(&srest);
  melody.queue(&dotb4);
  melody.queue(&sg4);

  harmony.queue(&sd4);
  harmony.queue(&sd4);
  harmony.queue(&sd4);
  harmony.queue(&srest);
  harmony.queue(&sd4);
  harmony.queue(&srest);
  harmony.queue(&dotf4);
  harmony.queue(&sg4);

  bass.queue(&sd4);
  bass.queue(&sd4);
  bass.queue(&sd4);
  bass.queue(&srest);
  bass.queue(&sg3);
  bass.queue(&srest);
  bass.queue(&lg3);
  bass.queue(&lrest);




  melody.queue(&le5); 
  melody.queue(&lrest);
  melody.queue(&leb5);
  melody.queue(&lrest);
  melody.queue(&le5);
  melody.queue(&lrest);
  melody.queue(&srest);
  melody.queue(&sg4);
  melody.queue(&sa4);
  melody.queue(&sb4);
  melody.queue(&sc5);
  melody.queue(&sd5);

  harmony.queue(&lg4);
  harmony.queue(&lrest);
  harmony.queue(&lgb4);
  harmony.queue(&lrest);
  harmony.queue(&lg4);
  harmony.queue(&lrest);
  harmony.queue(&srest);
  harmony.queue(&sg4);
  harmony.queue(&sa4);
  harmony.queue(&sb4);
  harmony.queue(&sc5);
  harmony.queue(&sd5);

  bass.queue(&sc3); // bass groups are only seperated per one measure, however
  bass.queue(&srest);
  bass.queue(&sg3);
  bass.queue(&srest);
  bass.queue(&sc4);
  bass.queue(&srest);
  
  bass.queue(&sb2);
  bass.queue(&srest);
  bass.queue(&sg3);
  bass.queue(&srest);
  bass.queue(&sb3);
  bass.queue(&srest);
  
  bass.queue(&sc3 );
  bass.queue(&srest);
  bass.queue(&sg3);
  bass.queue(&srest);
  bass.queue(&sc4);
  bass.queue(&srest);
  
  bass.queue(&se3 );
  bass.queue(&srest);
  bass.queue(&sg3);
  bass.queue(&srest);
  bass.queue(&sc4);
  bass.queue(&srest);



  melody.queue(&le5);
  melody.queue(&lrest);
  melody.queue(&qeb5);
  melody.queue(&f5);
  melody.queue(&le5);
  melody.queue(&lrest);
  melody.queue(&rest);
  melody.queue(&rest);
  melody.queue(&srest);
  melody.queue(&sg4);

  harmony.queue(&lg4);
  harmony.queue(&lrest);
  harmony.queue(&qgb4);
  harmony.queue(&a4);
  harmony.queue(&lg4);
  harmony.queue(&lrest);
  harmony.queue(&rest);
  harmony.queue(&rest);
  harmony.queue(&srest);
  harmony.queue(&sg4);

  bass.queue(&sc3); // bass groups are only seperated per one measure, however
  bass.queue(&srest);
  bass.queue(&sg3);
  bass.queue(&srest);
  bass.queue(&sc4);
  bass.queue(&srest);
  
  bass.queue(&sb2);
  bass.queue(&srest);
  bass.queue(&sg3);
  bass.queue(&srest);
  bass.queue(&sb3);
  bass.queue(&srest);
  
  bass.queue(&sc3 );
  bass.queue(&srest);
  bass.queue(&sg3);
  bass.queue(&srest);
  bass.queue(&sc4);
  bass.queue(&srest);
  
  bass.queue(&se3 );
  bass.queue(&srest);
  bass.queue(&sg3);
  bass.queue(&srest);
  bass.queue(&sc4);
  bass.queue(&srest);




  melody.queue(&ld5);
  melody.queue(&lrest);
  melody.queue(&ldb5);
  melody.queue(&lrest);
  melody.queue(&ld5);
  melody.queue(&lrest);  
  melody.queue(&srest);
  melody.queue(&sg4);
  melody.queue(&sa4);
  melody.queue(&sb4);
  melody.queue(&sc5);
  melody.queue(&sdb5); 
  

  harmony.queue(&lf4);
  harmony.queue(&lrest);
  harmony.queue(&le4);
  harmony.queue(&lrest);
  harmony.queue(&lf4);
  harmony.queue(&lrest);
  harmony.queue(&srest);
  harmony.queue(&sg4);
  harmony.queue(&sa4);
  harmony.queue(&sb4);
  harmony.queue(&sc5);
  harmony.queue(&sdb5);
  

  bass.queue(&sd3);
  bass.queue(&srest);
  bass.queue(&sg3);
  bass.queue(&srest);
  bass.queue(&sb3);
  bass.queue(&srest);

  bass.queue(&sdb3);
  bass.queue(&srest);
  bass.queue(&sgb3);
  bass.queue(&srest);
  bass.queue(&sbb3);
  bass.queue(&srest);

  bass.queue(&sd3);
  bass.queue(&srest);
  bass.queue(&sg3);
  bass.queue(&srest);
  bass.queue(&sb3);
  bass.queue(&srest);

  bass.queue(&sb2);
  bass.queue(&srest);
  bass.queue(&sg3);
  bass.queue(&srest);
  bass.queue(&sb3);
  bass.queue(&srest);




  melody.queue(&ld5);
  melody.queue(&lrest);
  melody.queue(&qg4);
  melody.queue(&f5);
  melody.queue(&le5);
  melody.queue(&lrest);
  melody.queue(&rest);
  melody.queue(&rest);
  melody.queue(&srest);
  melody.queue(&sg4);

  harmony.queue(&lf4);
  harmony.queue(&lrest);
  harmony.queue(&qb3);
  harmony.queue(&a4);
  harmony.queue(&lg4);
  harmony.queue(&lrest);
  harmony.queue(&rest);
  harmony.queue(&rest);
  harmony.queue(&srest);
  harmony.queue(&sg4);


  bass.queue(&se3);
  bass.queue(&srest);
  bass.queue(&sg3);
  bass.queue(&srest);
  bass.queue(&sb3);
  bass.queue(&srest);

  bass.queue(&sb2);
  bass.queue(&srest);
  bass.queue(&sg3);
  bass.queue(&srest);
  bass.queue(&sb3);
  bass.queue(&srest);
  
  bass.queue(&sc3);
  bass.queue(&srest);
  bass.queue(&sg3);
  bass.queue(&srest);
  bass.queue(&sc4);
  bass.queue(&srest);

  bass.queue(&sg2);
  bass.queue(&srest);
  bass.queue(&sg3);
  bass.queue(&srest);
  bass.queue(&sc4);
  bass.queue(&srest);


  // Other Melody

  melody.queue(&lg5);
  melody.queue(&lrest);
  melody.queue(&lg5);
  melody.queue(&lrest);
  melody.queue(&lg5);
  melody.queue(&lrest);
  melody.queue(&g5);
  melody.queue(&sa5);
  melody.queue(&rest);
  melody.queue(&sg5);

  harmony.queue(&le5);
  harmony.queue(&lrest);
  harmony.queue(&ld5);
  harmony.queue(&lrest);
  harmony.queue(&ldb5);
  harmony.queue(&lrest);
  harmony.queue(&g5);
  harmony.queue(&sa5);
  harmony.queue(&rest);
  harmony.queue(&sg5);

  bass.queue(&sc3);
  bass.queue(&srest);
  bass.queue(&sg3);
  bass.queue(&srest);
  bass.queue(&se4);
  bass.queue(&srest);

  bass.queue(&sb2);
  bass.queue(&srest);
  bass.queue(&sg3);
  bass.queue(&srest);
  bass.queue(&sd4);
  bass.queue(&srest);

  bass.queue(&sbb2);
  bass.queue(&srest);
  bass.queue(&sg3);
  bass.queue(&srest);
  bass.queue(&sdb4);
  bass.queue(&srest);

  bass.queue(&sdb3);
  bass.queue(&srest);
  bass.queue(&sg3);
  bass.queue(&srest);
  bass.queue(&se4);
  bass.queue(&srest);



  
  melody.queue(&lf5);
  melody.queue(&lrest);
  melody.queue(&lf5);
  melody.queue(&lrest);
  melody.queue(&lf5);
  melody.queue(&lrest);
  melody.queue(&f5);
  melody.queue(&sg5);
  melody.queue(&rest);
  melody.queue(&sf5);

  harmony.queue(&ld5);
  harmony.queue(&lrest);
  harmony.queue(&ldb5);
  harmony.queue(&lrest);
  harmony.queue(&lc5);
  harmony.queue(&lrest);
  harmony.queue(&f5);
  harmony.queue(&sg5);
  harmony.queue(&rest);
  harmony.queue(&sf5);

  bass.queue(&sd3);
  bass.queue(&srest);
  bass.queue(&sb3);
  bass.queue(&srest);
  bass.queue(&sf4);
  bass.queue(&srest);

  bass.queue(&sdb3);
  bass.queue(&srest);
  bass.queue(&sb3);
  bass.queue(&srest);
  bass.queue(&sf4);
  bass.queue(&srest);

  bass.queue(&sc3);
  bass.queue(&srest);
  bass.queue(&sb3);
  bass.queue(&srest);
  bass.queue(&sf4);
  bass.queue(&srest);

  bass.queue(&sb2);
  bass.queue(&srest);
  bass.queue(&sb3);
  bass.queue(&srest);
  bass.queue(&sf4);
  bass.queue(&srest);





  melody.queue(&le5);
  melody.queue(&lrest);
  melody.queue(&a4);
  melody.queue(&b4);
  melody.queue(&f5);
  melody.queue(&se5);
  melody.queue(&se5);
  melody.queue(&se5);
  melody.queue(&rest);
  melody.queue(&sb4);
  melody.queue(&lc5);
  melody.queue(&lrest);

  harmony.queue(&lc5);
  harmony.queue(&lrest);
  harmony.queue(&f4);
  harmony.queue(&g4);
  harmony.queue(&b4);
  harmony.queue(&sb4);
  harmony.queue(&sb4);
  harmony.queue(&sb4);
  harmony.queue(&rest);
  harmony.queue(&sf4);
  harmony.queue(&le4);
  harmony.queue(&lrest);

  bass.queue(&sc2);
  bass.queue(&srest);
  bass.queue(&sg3);
  bass.queue(&srest);
  bass.queue(&se4);
  bass.queue(&srest);

  bass.queue(&sa2);
  bass.queue(&srest);
  bass.queue(&sg3);
  bass.queue(&srest);
  bass.queue(&sg3);
  bass.queue(&srest);

  bass.queue(&sf3);
  bass.queue(&sf3);
  bass.queue(&sf3);
  bass.queue(&rest);
  bass.queue(&sb2);
  bass.queue(&lc3);
  bass.queue(&lrest);

  
  note stop;
  stop.tone = STOP;
  stop.duration = 0;

  melody.queue(&stop);

  m.play();
}

inline void underworld(channel &melody, channel &bass, channel &bbass){
  note rest;
  rest.tone = REST;
  rest.duration = EIGHTH * 2;

  note lrest;
  lrest.tone = REST;
  lrest.duration = EIGHTH * 4;

  note trest;
  trest.tone = REST;
  trest.duration = EIGHTH * 4 / 3;

  note drest;
  drest.tone = REST;
  drest.duration = EIGHTH * 6;

  note qrest;
  qrest.tone = REST;
  qrest.duration = EIGHTH * 8;

  note lowest_db;
  lowest_db.tone = -33;
  lowest_db.duration = EIGHTH * 2; 

  note lowest_d;
  lowest_d.tone = -32;
  lowest_d.duration = EIGHTH * 2; 

  note lowest_eb;
  lowest_eb.tone = -30;
  lowest_eb.duration = EIGHTH * 2; 

  note lowest_f;
  lowest_f.tone = -28;
  lowest_f.duration = EIGHTH * 2; 

  note lowest_g;
  lowest_g.tone = -26;
  lowest_g.duration = EIGHTH * 2;

  note lowest_ab;
  lowest_ab.tone = -25;
  lowest_ab.duration = EIGHTH * 2;

  note lower_abTRIP;
  lower_abTRIP.tone = -25;
  lower_abTRIP.duration = EIGHTH * 4 / 3; 
  
  note lower_a;
  lower_a.tone = -24;
  lower_a.duration = EIGHTH * 2;

  note lower_aTRIP;
  lower_aTRIP.tone = -24;
  lower_aTRIP.duration = EIGHTH * 4 / 3; 

  note lower_bbTRIP;
  lower_bbTRIP.tone = -23;
  lower_bbTRIP.duration = EIGHTH * 4 / 3; 

  note lower_bb;
  lower_bb.tone = -23;
  lower_bb.duration = EIGHTH * 2;

  note lower_bTRIP;
  lower_bTRIP.tone = -22;
  lower_bTRIP.duration = EIGHTH * 4 / 3; 

  note lower_c;
  lower_c.tone = -21;
  lower_c.duration = EIGHTH * 2; 

  note lower_cTRIP;
  lower_cTRIP.tone = -21;
  lower_cTRIP.duration = EIGHTH * 4 / 3; 

  note lower_dbTRIP;
  lower_dbTRIP.tone = -20;
  lower_dbTRIP.duration = EIGHTH * 4 /3; 

  note lower_d;
  lower_d.tone = -19;
  lower_d.duration = EIGHTH * 2; 

  note lower_dTRIP;
  lower_dTRIP.tone = -19;
  lower_dTRIP.duration = EIGHTH * 4 /3; 

  note lower_eb;
  lower_eb.tone = -18;
  lower_eb.duration = EIGHTH * 2; 

  note lower_ebTRIP;
  lower_ebTRIP.tone = -18;
  lower_ebTRIP.duration = EIGHTH * 4 /3; 

  note lower_eTRIP;
  lower_eTRIP.tone = -17;
  lower_eTRIP.duration = EIGHTH * 4 /3; 

  note lower_fTRIP;
  lower_fTRIP.tone = -16;
  lower_fTRIP.duration = EIGHTH * 4 /3; 

  note lower_f;
  lower_f.tone = -16;
  lower_f.duration = EIGHTH * 2; 

  note lower_gbTRIP;
  lower_gbTRIP.tone = -15;
  lower_gbTRIP.duration = EIGHTH * 4 /3; 

  note low_g;
  low_g.tone = -14;
  low_g.duration = EIGHTH * 2;

  note low_ab;
  low_ab.tone = -13;
  low_ab.duration = EIGHTH * 2;

  note low_abTRIP;
  low_abTRIP.tone = -13;
  low_abTRIP.duration = EIGHTH * 4 / 3;

  note low_a;
  low_a.tone = -12;
  low_a.duration = EIGHTH * 2;

  note low_aTRIP;
  low_aTRIP.tone = -12;
  low_aTRIP.duration = EIGHTH * 4 / 3;

  note low_bb;
  low_bb.tone = -11;
  low_bb.duration = EIGHTH * 2;

  note low_bbTRIP;
  low_bbTRIP.tone = -11;
  low_bbTRIP.duration = EIGHTH * 4 / 3;

  note low_bTRIP;
  low_bTRIP.tone = -10;
  low_bTRIP.duration = EIGHTH * 4 / 3;

  note low_c;
  low_c.tone = -9;
  low_c.duration = EIGHTH * 2;

  note low_cTRIP;
  low_cTRIP.tone = -9;
  low_cTRIP.duration = EIGHTH * 4 / 3;

  note low_db;
  low_db.tone = -8;
  low_db.duration = EIGHTH * 2; 

  note low_d;
  low_d.tone = -7;
  low_d.duration = EIGHTH * 2; 

  note low_dbTRIP;
  low_dbTRIP.tone = -8;
  low_dbTRIP.duration = EIGHTH * 4 /3; 

  note low_dTRIP;
  low_dTRIP.tone = -7;
  low_dTRIP.duration = EIGHTH * 4 /3; 

  note low_eb;
  low_eb.tone = -6;
  low_eb.duration = EIGHTH * 2; 

  note low_ebTRIP;
  low_ebTRIP.tone = -6;
  low_ebTRIP.duration = EIGHTH * 4 /3; 

  note low_eTRIP;
  low_eTRIP.tone = -5;
  low_eTRIP.duration = EIGHTH * 4 /3; 

  note low_f;
  low_f.tone = -4;
  low_f.duration = EIGHTH * 2; 

  note low_fTRIP;
  low_fTRIP.tone = -4;
  low_fTRIP.duration = EIGHTH * 4 / 3; 

  note low_gbTRIP;
  low_gbTRIP.tone = -3;
  low_gbTRIP.duration = EIGHTH * 4 / 3;

  note abTRIP;
  abTRIP.tone = -1;
  abTRIP.duration = EIGHTH * 4 /3; 

  note aTRIP;
  aTRIP.tone = 0;
  aTRIP.duration = EIGHTH * 4 /3; 

  note a;
  a.tone = 0;
  a.duration = EIGHTH * 2;

  note bb;
  bb.tone = 1;
  bb.duration = EIGHTH * 2;

  note bbTRIP;
  bbTRIP.tone = 1;
  bbTRIP.duration = EIGHTH * 4 /3; 

  note bTRIP;
  bTRIP.tone = 2;
  bTRIP.duration = EIGHTH * 4 /3; 
  
  note c;
  c.tone = 3;
  c.duration = EIGHTH * 2; 

  melody.notes = memblk;
  bass.notes = melody.notes + 100;
  bbass.notes = bass.notes + 100;

     melody.realloc_notes();
     bass.realloc_notes();
     bbass.realloc_notes();

  melody.queue(&rest);
  melody.queue(&c);
  melody.queue(&rest);
  melody.queue(&a);
  melody.queue(&rest);
  melody.queue(&bb);
  melody.queue(&lrest);
  melody.queue(&qrest);

  bass.queue(&low_c);
  bass.queue(&rest);
  bass.queue(&low_a);
  bass.queue(&rest);
  bass.queue(&low_bb);
  bass.queue(&rest);
  bass.queue(&lrest);
  bass.queue(&qrest);

  bbass.queue(&lower_c);
  bbass.queue(&rest);
  bbass.queue(&lower_a);
  bbass.queue(&rest);
  bbass.queue(&lower_bb);
  bbass.queue(&rest);
  bbass.queue(&lrest);
  bbass.queue(&qrest);



  melody.queue(&rest);
  melody.queue(&c);
  melody.queue(&rest);
  melody.queue(&a);
  melody.queue(&rest);
  melody.queue(&bb);
  melody.queue(&lrest);
  melody.queue(&qrest);

  bass.queue(&low_c);
  bass.queue(&rest);
  bass.queue(&low_a);
  bass.queue(&rest);
  bass.queue(&low_bb);
  bass.queue(&rest);
  bass.queue(&lrest);
  bass.queue(&qrest);

  bbass.queue(&lower_c);
  bbass.queue(&rest);
  bbass.queue(&lower_a);
  bbass.queue(&rest);
  bbass.queue(&lower_bb);
  bbass.queue(&rest);
  bbass.queue(&lrest);
  bbass.queue(&qrest);




  melody.queue(&rest);
  melody.queue(&low_f);
  melody.queue(&rest);
  melody.queue(&low_d);
  melody.queue(&rest);
  melody.queue(&low_eb);
  melody.queue(&lrest);
  melody.queue(&qrest);

  bass.queue(&lower_f);
  bass.queue(&rest);
  bass.queue(&lower_d);
  bass.queue(&rest);
  bass.queue(&lower_eb);
  bass.queue(&rest);
  bass.queue(&lrest);
  bass.queue(&qrest);

  bbass.queue(&lowest_f);
  bbass.queue(&rest);
  bbass.queue(&lowest_d);
  bbass.queue(&rest);
  bbass.queue(&lowest_eb);
  bbass.queue(&rest);
  bbass.queue(&lrest);
  bbass.queue(&qrest);



  melody.queue(&rest);
  melody.queue(&low_f);
  melody.queue(&rest);
  melody.queue(&low_d);
  melody.queue(&rest);
  melody.queue(&low_eb);
  melody.queue(&qrest);
  melody.queue(&low_ebTRIP);
  melody.queue(&low_dTRIP);
  melody.queue(&low_dbTRIP);

  bass.queue(&lower_f);
  bass.queue(&rest);
  bass.queue(&lower_d);
  bass.queue(&rest);
  bass.queue(&lower_eb);
  bass.queue(&rest);
  bass.queue(&qrest);
  bass.queue(&lower_ebTRIP);
  bass.queue(&lower_dTRIP);
  bass.queue(&lower_dbTRIP);

  bbass.queue(&lowest_f);
  bbass.queue(&rest);
  bbass.queue(&lowest_d);
  bbass.queue(&rest);
  bbass.queue(&lowest_eb);
  bbass.queue(&rest);
  bbass.queue(&qrest);
  bbass.queue(&lower_ebTRIP);
  bbass.queue(&lower_dTRIP);
  bbass.queue(&lower_dbTRIP);



  melody.queue(&low_c);
  melody.queue(&rest);
  melody.queue(&low_eb);
  melody.queue(&rest);
  melody.queue(&low_d);
  melody.queue(&rest);
  melody.queue(&low_ab);
  melody.queue(&rest);
  melody.queue(&low_g);
  melody.queue(&rest);
  melody.queue(&low_db);
  melody.queue(&rest);
  

  bass.queue(&lower_c);
  bass.queue(&rest);
  bass.queue(&lower_eb);
  bass.queue(&rest);
  bass.queue(&lower_d);
  bass.queue(&rest);
  bass.queue(&lowest_ab);
  bass.queue(&rest);
  bass.queue(&lowest_g);
  bass.queue(&rest);
  bass.queue(&lowest_db);
  bass.queue(&rest);
  

  bbass.queue(&lower_c);
  bbass.queue(&rest);
  bbass.queue(&lower_eb);
  bbass.queue(&rest);
  bbass.queue(&lower_d);
  bbass.queue(&rest);
  bbass.queue(&lowest_ab);
  bbass.queue(&rest);
  bbass.queue(&lowest_g);
  bbass.queue(&rest);
  bbass.queue(&lowest_db);
  bbass.queue(&rest);



  melody.queue(&low_cTRIP);
  melody.queue(&low_gbTRIP);
  melody.queue(&low_fTRIP);
  melody.queue(&low_eTRIP);
  melody.queue(&bbTRIP);
  melody.queue(&aTRIP);
  melody.queue(&abTRIP);
  melody.queue(&trest);
  melody.queue(&low_ebTRIP);
  melody.queue(&trest);
  melody.queue(&low_bTRIP);
  melody.queue(&trest);
  melody.queue(&low_bbTRIP);
  melody.queue(&trest);
  melody.queue(&low_aTRIP);
  melody.queue(&trest);
  melody.queue(&low_abTRIP);
  melody.queue(&trest);
  melody.queue(&qrest);

  bass.queue(&lower_cTRIP);
  bass.queue(&lower_gbTRIP);
  bass.queue(&lower_fTRIP);
  bass.queue(&lower_eTRIP);
  bass.queue(&low_bbTRIP);
  bass.queue(&low_aTRIP);
  bass.queue(&low_abTRIP);
  bass.queue(&trest);
  bass.queue(&lower_ebTRIP);
  bass.queue(&trest);
  bass.queue(&lower_bTRIP);
  bass.queue(&trest);
  bass.queue(&lower_bbTRIP);
  bass.queue(&trest);
  bass.queue(&lower_aTRIP);
  bass.queue(&trest);
  bass.queue(&lower_abTRIP);
  bass.queue(&trest);
  bass.queue(&qrest);
  
  bbass.queue(&lower_cTRIP);
  bbass.queue(&lower_gbTRIP);
  bbass.queue(&lower_fTRIP);
  bbass.queue(&lower_eTRIP);
  bbass.queue(&low_bbTRIP);
  bbass.queue(&low_aTRIP);
  bbass.queue(&low_abTRIP);
  bbass.queue(&trest);
  bbass.queue(&lower_ebTRIP);
  bbass.queue(&trest);
  bbass.queue(&lower_bTRIP);
  bbass.queue(&trest);
  bbass.queue(&lower_bbTRIP);
  bbass.queue(&trest);
  bbass.queue(&lower_aTRIP);
  bbass.queue(&trest);
  bbass.queue(&lower_abTRIP);
  bbass.queue(&trest);
  bbass.queue(&qrest);

  note stop;
  stop.tone = STOP;
  stop.duration = 0;

  melody.queue(&stop);

  m.play();
  
}

inline void intro(channel &melody, channel &harmony, channel &bass){

  note hrest;
  hrest.tone = REST;
  hrest.duration = EIGHTH * 16;

  note eb;
  eb.tone = 6;
  eb.duration = EIGHTH * 2;

  note lower_eb;
  lower_eb.tone = -18;
  lower_eb.duration = EIGHTH * 2;
  
  note e;
  e.tone = 7;
  e.duration = EIGHTH * 2;

  note eTRIP;
  eTRIP.tone = 7;
  eTRIP.duration = EIGHTH * 8 / 3;

  note low_e;
  low_e.tone = -5;
  low_e.duration = EIGHTH * 2;

  note low_eTRIP;
  low_eTRIP.tone = -5;
  low_eTRIP.duration = EIGHTH * 8 / 3;

  note f;
  f.tone = 8;
  f.duration = EIGHTH * 2;

  note low_f;
  low_f.tone = -4;
  low_f.duration = EIGHTH * 2;

  note lower_f;
  lower_f.tone = -16;
  lower_f.duration = EIGHTH * 2;

  note lower_gb;
  lower_gb.tone = -15;
  lower_gb.duration = EIGHTH * 2;

  note low_g;
  low_g.tone = -2;
  low_g.duration = EIGHTH * 2;

  note low_gTRIP;
  low_gTRIP.tone = -2;
  low_gTRIP.duration = EIGHTH * 8 / 3;

  note lower_g;
  lower_g.tone = -14;
  lower_g.duration = EIGHTH * 2;

  note lower_e;
  lower_e.tone = -17;
  lower_e.duration = EIGHTH * 2;

  note lower_eTRIP;
  lower_eTRIP.tone = -17;
  lower_eTRIP.duration = EIGHTH * 8 / 3;

  note rest;
  rest.tone = REST;
  rest.duration = EIGHTH * 2;

  note lrest;
  lrest.tone = REST;
  lrest.duration = EIGHTH * 4;

  note qrest;
  qrest.tone = REST;
  qrest.duration = EIGHTH * 8;

  note dottedrest;
  dottedrest.tone = REST;
  dottedrest.duration = EIGHTH * 6;

  note high_c;
  high_c.tone = 15;
  high_c.duration = EIGHTH * 2;

  note c;
  c.tone = 3;
  c.duration = EIGHTH * 2;

  note low_c;
  low_c.tone = -9;
  low_c.duration = EIGHTH * 2;

  note low_cTRIP;
  low_cTRIP.tone = -9;
  low_cTRIP.duration = EIGHTH * 8 / 3;

  note lower_c;
  lower_c.tone = -21;
  lower_c.duration = EIGHTH * 2;

  note low_db;
  low_db.tone = -8;
  low_db.duration = EIGHTH * 2;

  note low_d;
  low_d.tone = -7;
  low_d.duration = EIGHTH * 2;

  note high_g1;
  high_g1.tone = 10;
  high_g1.duration = EIGHTH * 2;

  note high_g1TRIP;
  high_g1TRIP.tone = 10;
  high_g1TRIP.duration = EIGHTH * 8 / 3;

  note low_g1;
  low_g1.tone = -2;
  low_g1.duration = EIGHTH * 2;

  note ab;
  ab.tone = -1;
  ab.duration = EIGHTH * 2;

  note low_ab;
  low_ab.tone = -13;
  low_ab.duration = EIGHTH * 2;

  note lower_ab;
  lower_ab.tone = -25;
  lower_ab.duration = EIGHTH * 2;

  note lower_bb;
  lower_bb.tone = -23;
  lower_bb.duration = EIGHTH * 2;

  note a;
  a.tone = 0;
  a.duration = EIGHTH * 2;

  note low_a;
  low_a.tone = -12;
  low_a.duration = EIGHTH * 2;

  note high_a;
  high_a.tone = 12;
  high_a.duration = EIGHTH * 2;

  note bb;
  bb.tone = 1;
  bb.duration = EIGHTH * 2;

  note b;
  b.tone = 2;
  b.duration = EIGHTH * 2;

  note low_b;
  low_b.tone = -10;
  low_b.duration = EIGHTH * 2;

  note bTRIP;
  bTRIP.tone = 2;
  bTRIP.duration = EIGHTH * 8 / 3;

  note lower_g1;
  lower_g1.tone = -14;
  lower_g1.duration = EIGHTH * 2;

  note lowest_g1;
  lowest_g1.tone = -26;
  lowest_g1.duration = EIGHTH * 2;

  note high_gb;
  high_gb.tone = 9;
  high_gb.duration = EIGHTH * 2;

  note gb;
  gb.tone = -3;
  gb.duration = EIGHTH * 2;

  note mid_d;
  mid_d.tone = 5;
  mid_d.duration = EIGHTH * 2;

  note d;
  d.tone = -7;
  d.duration = EIGHTH * 2;

  note b1;
  b1.tone = 2;
  b1.duration = EIGHTH * 2;

  // END OF NOTES DECLARATION  
  // ALLOCS

  melody.notes = memblk;
  harmony.notes = melody.notes + 300;
  bass.notes = harmony.notes + 310;

     melody.realloc_notes();
     harmony.realloc_notes();
     bass.realloc_notes();
  
  // START OF PLAYBACK
  // INTRO

  melody.queue(&e);
  melody.queue(&e);
  melody.queue(&rest);
  melody.queue(&e);
  melody.queue(&rest);
  
  melody.queue(&c);
  melody.queue(&e);
  melody.queue(&rest);
  
  melody.queue(&high_g1);
  melody.queue(&dottedrest);
  melody.queue(&low_g1);
  melody.queue(&dottedrest);
  
  harmony.queue(&gb);
  harmony.queue(&gb);
  harmony.queue(&rest);
  harmony.queue(&gb);
  harmony.queue(&rest);
  harmony.queue(&gb);
  harmony.queue(&gb);
  harmony.queue(&rest);

  harmony.queue(&b1);
  harmony.queue(&dottedrest);
  harmony.queue(&low_g1);
  harmony.queue(&dottedrest);


  bass.queue(&d);
  bass.queue(&d);
  bass.queue(&rest);
  bass.queue(&d);
  bass.queue(&rest);
  bass.queue(&d);
  bass.queue(&d);
  bass.queue(&rest);

  bass.queue(&lower_g1);
  bass.queue(&dottedrest);
  bass.queue(&lower_g1);
  bass.queue(&dottedrest);

  // MELODY

for (int i = 0; i < 2; i++)
{
  melody.queue(&c);
  melody.queue(&lrest);
  melody.queue(&low_g1);
  melody.queue(&lrest);
  melody.queue(&low_e);
  melody.queue(&lrest);
  melody.queue(&a);
  melody.queue(&rest);
  melody.queue(&b);
  melody.queue(&rest);
  melody.queue(&bb);
  melody.queue(&a);
  melody.queue(&rest);
  
  harmony.queue(&low_e);
  harmony.queue(&lrest);
  harmony.queue(&low_c);
  harmony.queue(&lrest);
  harmony.queue(&lower_g1);
  harmony.queue(&lrest);
  harmony.queue(&low_c);
  harmony.queue(&rest);
  harmony.queue(&low_d);
  harmony.queue(&rest);
  harmony.queue(&low_db);
  harmony.queue(&low_c);
  harmony.queue(&rest);
  
  bass.queue(&lower_g1);
  bass.queue(&lrest);
  bass.queue(&lower_e);
  bass.queue(&lrest);
  bass.queue(&lower_c);
  bass.queue(&lrest);
  bass.queue(&lower_f);
  bass.queue(&rest);
  bass.queue(&lower_g1);
  bass.queue(&rest);
  bass.queue(&lower_gb);
  bass.queue(&lower_f);
  bass.queue(&rest);



  melody.queue(&low_gTRIP);
  melody.queue(&eTRIP);
  melody.queue(&high_g1TRIP);
  melody.queue(&high_a);
  melody.queue(&rest);
  melody.queue(&f);
  melody.queue(&high_g1);
  melody.queue(&rest);
  melody.queue(&e);
  melody.queue(&rest);
  melody.queue(&c);
  melody.queue(&d);
  melody.queue(&b);
  melody.queue(&lrest);

  harmony.queue(&low_cTRIP);
  harmony.queue(&low_gTRIP);
  harmony.queue(&bTRIP);
  harmony.queue(&c);
  harmony.queue(&rest);
  harmony.queue(&a);
  harmony.queue(&b);
  harmony.queue(&rest);
  harmony.queue(&a);
  harmony.queue(&rest);
  harmony.queue(&low_e);
  harmony.queue(&low_f);
  harmony.queue(&low_d);
  harmony.queue(&lrest);

  bass.queue(&lower_eTRIP);
  bass.queue(&low_cTRIP);
  bass.queue(&low_eTRIP);
  bass.queue(&low_f);
  bass.queue(&rest);
  bass.queue(&low_d);
  bass.queue(&low_e);
  bass.queue(&rest);
  bass.queue(&low_c);
  bass.queue(&rest);
  bass.queue(&low_a);
  bass.queue(&low_b);
  bass.queue(&lower_g);
  bass.queue(&lrest);
}

  note stop;
  stop.tone = STOP;
  stop.duration = 0;

  melody.queue(&stop);

  m.play();
}

inline void song(channel &melody, channel &harmony, channel &bass){

  // melody, harmony, and bass notes

  note hrest;
  hrest.tone = REST;
  hrest.duration = EIGHTH * 16;

  note eb;
  eb.tone = 6;
  eb.duration = EIGHTH * 2;

  note lower_eb;
  lower_eb.tone = -18;
  lower_eb.duration = EIGHTH * 2;
  
  note e;
  e.tone = 7;
  e.duration = EIGHTH * 2;

  note eTRIP;
  eTRIP.tone = 7;
  eTRIP.duration = EIGHTH * 8 / 3;

  note low_e;
  low_e.tone = -5;
  low_e.duration = EIGHTH * 2;

  note low_eTRIP;
  low_eTRIP.tone = -5;
  low_eTRIP.duration = EIGHTH * 8 / 3;

  note f;
  f.tone = 8;
  f.duration = EIGHTH * 2;

  note low_f;
  low_f.tone = -4;
  low_f.duration = EIGHTH * 2;

  note lower_f;
  lower_f.tone = -16;
  lower_f.duration = EIGHTH * 2;

  note lower_gb;
  lower_gb.tone = -15;
  lower_gb.duration = EIGHTH * 2;

  note low_g;
  low_g.tone = -2;
  low_g.duration = EIGHTH * 2;

  note low_gTRIP;
  low_gTRIP.tone = -2;
  low_gTRIP.duration = EIGHTH * 8 / 3;

  note lower_g;
  lower_g.tone = -14;
  lower_g.duration = EIGHTH * 2;

  note lower_e;
  lower_e.tone = -17;
  lower_e.duration = EIGHTH * 2;

  note lower_eTRIP;
  lower_eTRIP.tone = -17;
  lower_eTRIP.duration = EIGHTH * 8 / 3;

  note rest;
  rest.tone = REST;
  rest.duration = EIGHTH * 2;

  note lrest;
  lrest.tone = REST;
  lrest.duration = EIGHTH * 4;

  note qrest;
  qrest.tone = REST;
  qrest.duration = EIGHTH * 8;

  note dottedrest;
  dottedrest.tone = REST;
  dottedrest.duration = EIGHTH * 6;

  note high_c;
  high_c.tone = 15;
  high_c.duration = EIGHTH * 2;

  note c;
  c.tone = 3;
  c.duration = EIGHTH * 2;

  note low_c;
  low_c.tone = -9;
  low_c.duration = EIGHTH * 2;

  note low_cTRIP;
  low_cTRIP.tone = -9;
  low_cTRIP.duration = EIGHTH * 8 / 3;

  note lower_c;
  lower_c.tone = -21;
  lower_c.duration = EIGHTH * 2;

  note low_db;
  low_db.tone = -8;
  low_db.duration = EIGHTH * 2;

  note low_d;
  low_d.tone = -7;
  low_d.duration = EIGHTH * 2;

  note high_g1;
  high_g1.tone = 10;
  high_g1.duration = EIGHTH * 2;

  note high_g1TRIP;
  high_g1TRIP.tone = 10;
  high_g1TRIP.duration = EIGHTH * 8 / 3;

  note low_g1;
  low_g1.tone = -2;
  low_g1.duration = EIGHTH * 2;

  note ab;
  ab.tone = -1;
  ab.duration = EIGHTH * 2;

  note low_ab;
  low_ab.tone = -13;
  low_ab.duration = EIGHTH * 2;

  note lower_ab;
  lower_ab.tone = -25;
  lower_ab.duration = EIGHTH * 2;

  note lower_bb;
  lower_bb.tone = -23;
  lower_bb.duration = EIGHTH * 2;

  note a;
  a.tone = 0;
  a.duration = EIGHTH * 2;

  note low_a;
  low_a.tone = -12;
  low_a.duration = EIGHTH * 2;

  note high_a;
  high_a.tone = 12;
  high_a.duration = EIGHTH * 2;

  note bb;
  bb.tone = 1;
  bb.duration = EIGHTH * 2;

  note b;
  b.tone = 2;
  b.duration = EIGHTH * 2;

  note low_b;
  low_b.tone = -10;
  low_b.duration = EIGHTH * 2;

  note bTRIP;
  bTRIP.tone = 2;
  bTRIP.duration = EIGHTH * 8 / 3;

  note lower_g1;
  lower_g1.tone = -14;
  lower_g1.duration = EIGHTH * 2;

  note lowest_g1;
  lowest_g1.tone = -26;
  lowest_g1.duration = EIGHTH * 2;

  note high_gb;
  high_gb.tone = 9;
  high_gb.duration = EIGHTH * 2;

  note gb;
  gb.tone = -3;
  gb.duration = EIGHTH * 2;

  note mid_d;
  mid_d.tone = 5;
  mid_d.duration = EIGHTH * 2;

  note d;
  d.tone = -7;
  d.duration = EIGHTH * 2;

  note b1;
  b1.tone = 2;
  b1.duration = EIGHTH * 2;

  // END OF NOTES DECLARATION  
  // ALLOCS

  melody.notes = memblk;
  harmony.notes = melody.notes + 300;
  bass.notes = harmony.notes + 310;

     melody.realloc_notes();
     harmony.realloc_notes();
     bass.realloc_notes();
  
  // START OF PLAYBACK

  // MELODY CONTINUED

for (int i = 0; i < 2; i++)
{
  melody.queue(&lrest);
  melody.queue(&high_g1);
  melody.queue(&high_gb);
  melody.queue(&f);
  melody.queue(&eb);
  melody.queue(&rest);
  melody.queue(&e);
  melody.queue(&rest);
  melody.queue(&low_g1);
  melody.queue(&a);
  melody.queue(&c);
  melody.queue(&rest);
  melody.queue(&a);
  melody.queue(&c);
  melody.queue(&d);

  harmony.queue(&lrest);
  harmony.queue(&e);
  harmony.queue(&eb);
  harmony.queue(&d);
  harmony.queue(&b);
  harmony.queue(&rest);
  harmony.queue(&c);
  harmony.queue(&rest);
  harmony.queue(&low_e);
  harmony.queue(&low_f);
  harmony.queue(&low_g1);
  harmony.queue(&rest);
  harmony.queue(&low_c);
  harmony.queue(&low_e);
  harmony.queue(&low_f);

  bass.queue(&lower_c);
  bass.queue(&lrest);
  bass.queue(&lower_e);
  bass.queue(&lrest);
  bass.queue(&low_c);
  bass.queue(&rest);
  bass.queue(&lower_f);
  bass.queue(&lrest);
  bass.queue(&low_c);
  bass.queue(&low_c);
  bass.queue(&rest);
  bass.queue(&lower_f);
  bass.queue(&rest);



  melody.queue(&rest);
  melody.queue(&rest);
  melody.queue(&high_g1);
  melody.queue(&high_gb);
  melody.queue(&f);
  melody.queue(&eb);
  melody.queue(&rest);
  melody.queue(&e);
  melody.queue(&rest);
  melody.queue(&high_c);
  melody.queue(&rest);
  melody.queue(&high_c);
  melody.queue(&high_c);
  melody.queue(&dottedrest);

  harmony.queue(&rest);
  harmony.queue(&rest);
  harmony.queue(&e);
  harmony.queue(&eb);
  harmony.queue(&d);
  harmony.queue(&b);
  harmony.queue(&rest);
  harmony.queue(&c);
  harmony.queue(&rest);
  harmony.queue(&high_g1);
  harmony.queue(&rest);
  harmony.queue(&high_g1);
  harmony.queue(&high_g1);
  harmony.queue(&dottedrest);

  bass.queue(&lower_c);
  bass.queue(&lrest);
  bass.queue(&lower_e);
  bass.queue(&lrest);
  bass.queue(&lower_g);
  bass.queue(&low_c);
  bass.queue(&rest);
  bass.queue(&f);
  bass.queue(&rest);
  bass.queue(&f);
  bass.queue(&f);
  bass.queue(&rest);
  bass.queue(&lower_g);
  bass.queue(&rest);




  melody.queue(&lrest);
  melody.queue(&high_g1);
  melody.queue(&high_gb);
  melody.queue(&f);
  melody.queue(&eb);
  melody.queue(&rest);
  melody.queue(&e);
  melody.queue(&rest);
  melody.queue(&low_g1);
  melody.queue(&a);
  melody.queue(&c);
  melody.queue(&rest);
  melody.queue(&a);
  melody.queue(&c);
  melody.queue(&d);

  harmony.queue(&lrest);
  harmony.queue(&e);
  harmony.queue(&eb);
  harmony.queue(&d);
  harmony.queue(&b);
  harmony.queue(&rest);
  harmony.queue(&c);
  harmony.queue(&rest);
  harmony.queue(&low_e);
  harmony.queue(&low_f);
  harmony.queue(&low_g1);
  harmony.queue(&rest);
  harmony.queue(&low_c);
  harmony.queue(&low_e);
  harmony.queue(&low_f);

  bass.queue(&lower_c);
  bass.queue(&lrest);
  bass.queue(&lower_e);
  bass.queue(&lrest);
  bass.queue(&low_c);
  bass.queue(&rest);
  bass.queue(&lower_f);
  bass.queue(&lrest);
  bass.queue(&low_c);
  bass.queue(&low_c);
  bass.queue(&rest);
  bass.queue(&lower_f);
  bass.queue(&rest);



  melody.queue(&lrest);
  melody.queue(&eb);
  melody.queue(&lrest);
  melody.queue(&d);
  melody.queue(&lrest);
  melody.queue(&c);
  melody.queue(&dottedrest);
  melody.queue(&qrest);

  harmony.queue(&lrest);
  harmony.queue(&ab);
  harmony.queue(&lrest);
  harmony.queue(&low_f);
  harmony.queue(&lrest);
  harmony.queue(&low_e);
  harmony.queue(&dottedrest);
  harmony.queue(&qrest);

  bass.queue(&lower_c);
  bass.queue(&rest);
  bass.queue(&lower_ab);
  bass.queue(&lrest);
  bass.queue(&lower_bb);
  bass.queue(&lrest);
  bass.queue(&lower_c);
  bass.queue(&lrest);
  bass.queue(&lower_g1);
  bass.queue(&lower_g1);
  bass.queue(&rest);
  bass.queue(&lower_c);
  bass.queue(&rest);
}

  // BRIDGE

  melody.queue(&c);
  melody.queue(&c);
  melody.queue(&rest);
  melody.queue(&c);
  melody.queue(&rest);
  melody.queue(&c);
  melody.queue(&d);
  melody.queue(&rest);
  melody.queue(&e);
  melody.queue(&c);
  melody.queue(&rest);
  melody.queue(&a);
  melody.queue(&low_g1);
  melody.queue(&dottedrest);

  harmony.queue(&ab);
  harmony.queue(&ab);
  harmony.queue(&rest);
  harmony.queue(&ab);
  harmony.queue(&rest);
  harmony.queue(&ab);
  harmony.queue(&bb);
  harmony.queue(&rest);
  harmony.queue(&low_g1);
  harmony.queue(&low_e);
  harmony.queue(&rest);
  harmony.queue(&low_e);
  harmony.queue(&low_c);
  harmony.queue(&dottedrest);

  bass.queue(&lower_ab);
  bass.queue(&lrest);
  bass.queue(&lower_eb);
  bass.queue(&lrest);
  bass.queue(&low_ab);
  bass.queue(&rest);
  bass.queue(&lower_g1);
  bass.queue(&lrest);
  bass.queue(&lower_c);
  bass.queue(&lrest);
  bass.queue(&lowest_g1);
  bass.queue(&rest);



  melody.queue(&c);
  melody.queue(&c);
  melody.queue(&rest);
  melody.queue(&c);
  melody.queue(&rest);
  melody.queue(&c);
  melody.queue(&d);
  melody.queue(&e);
  melody.queue(&hrest);

  harmony.queue(&ab);
  harmony.queue(&ab);
  harmony.queue(&rest);
  harmony.queue(&ab);
  harmony.queue(&rest);
  harmony.queue(&ab);
  harmony.queue(&bb);
  harmony.queue(&low_g1);
  harmony.queue(&hrest);

  bass.queue(&lower_ab);
  bass.queue(&lrest);
  bass.queue(&lower_eb);
  bass.queue(&lrest);
  bass.queue(&low_ab);
  bass.queue(&rest);
  bass.queue(&lower_g1);
  bass.queue(&lrest);
  bass.queue(&lower_c);
  bass.queue(&lrest);
  bass.queue(&lowest_g1);
  bass.queue(&rest);



  melody.queue(&c);
  melody.queue(&c);
  melody.queue(&rest);
  melody.queue(&c);
  melody.queue(&rest);
  melody.queue(&c);
  melody.queue(&d);
  melody.queue(&rest);
  melody.queue(&e);
  melody.queue(&c);
  melody.queue(&rest);
  melody.queue(&a);
  melody.queue(&low_g1);
  melody.queue(&dottedrest);

  harmony.queue(&ab);
  harmony.queue(&ab);
  harmony.queue(&rest);
  harmony.queue(&ab);
  harmony.queue(&rest);
  harmony.queue(&ab);
  harmony.queue(&bb);
  harmony.queue(&rest);
  harmony.queue(&low_g1);
  harmony.queue(&low_e);
  harmony.queue(&rest);
  harmony.queue(&low_e);
  harmony.queue(&low_c);
  harmony.queue(&dottedrest);

  bass.queue(&lower_ab);
  bass.queue(&lrest);
  bass.queue(&lower_eb);
  bass.queue(&lrest);
  bass.queue(&low_ab);
  bass.queue(&rest);
  bass.queue(&lower_g1);
  bass.queue(&lrest);
  bass.queue(&lower_c);
  bass.queue(&lrest);
  bass.queue(&lowest_g1);
  bass.queue(&rest);

  

  // SWING IT BACK TO THE INTRO!
  

  // PART I ALWAYS FORGET ABOUT

  note stop;
  stop.tone = STOP;
  stop.duration = 0;

  melody.queue(&stop);

  m.play();
}

inline void ending(channel &melody, channel &harmony, channel &bass){

  int hold = 20;
  
  note ab_sl;
  ab_sl.tone = -1;
  ab_sl.duration = EIGHTH * 3;
  
  note a_sl;
  a_sl.tone = 0;
  a_sl.duration = EIGHTH * 3;

  note bb_sl;
  bb_sl.tone = 1;
  bb_sl.duration = EIGHTH * 3;

  note b_sl;
  b_sl.tone = 2;
  b_sl.duration = EIGHTH * 3;

  note e_sl;
  e_sl.tone = -5;
  e_sl.duration = EIGHTH * 3 / 2;

  note d_sl;
  d_sl.tone = -7;
  d_sl.duration = EIGHTH * 3 / 2;

  note slF;
  slF.tone = -4;
  slF.duration = EIGHTH  * 9;

  note slFF;
  slFF.tone = -16;
  slFF.duration = EIGHTH  * 9;

  note slDb;
  slDb.tone = -20;
  slDb.duration = EIGHTH  * 9;

  note cHOLD;
  cHOLD.tone = -21;
  cHOLD.duration = EIGHTH  * hold;

  note gHOLD;
  gHOLD.tone = -2;
  gHOLD.duration = EIGHTH * hold;

  note eHOLD;
  eHOLD.tone = -5;
  eHOLD.duration = EIGHTH * hold - EIGHTH * 3 / 2;
  
 
  note lower_gTRIP;
  lower_gTRIP.tone = -14;
  lower_gTRIP.duration = EIGHTH * 9 / 6;

  note lower_aTRIP;
  lower_aTRIP.tone = -12;
  lower_aTRIP.duration = EIGHTH * 9 / 6;

  note lower_bTRIP;
  lower_bTRIP.tone = -10;
  lower_bTRIP.duration = EIGHTH * 9 / 6;

  note low_gTRIP;
  low_gTRIP.tone = -2;
  low_gTRIP.duration = EIGHTH * 9 / 6;

  note bTRIP;
  bTRIP.tone = 2;
  bTRIP.duration = EIGHTH * 9 / 6;

  note cTRIP;
  cTRIP.tone = 3;
  cTRIP.duration = EIGHTH * 9 / 6;

  note dTRIP;
  dTRIP.tone = 5;
  dTRIP.duration = EIGHTH * 9 / 6;
  
  note eTRIP;
  eTRIP.tone = 7;
  eTRIP.duration = EIGHTH * 9 / 6;

  note fTRIP;
  fTRIP.tone = 8;
  fTRIP.duration = EIGHTH * 9 / 6;

  note gTRIP;
  gTRIP.tone = 10;
  gTRIP.duration = EIGHTH * 9 / 6;

  note aTRIP;
  aTRIP.tone = 12;
  aTRIP.duration = EIGHTH * 9 / 6;

  note hrest;
  hrest.tone = REST;
  hrest.duration = EIGHTH * 16;

  note trest;
  trest.tone = REST;
  trest.duration = EIGHTH * 7 / 6;

  note eb;
  eb.tone = 6;
  eb.duration = EIGHTH * 2;

  note lower_eb;
  lower_eb.tone = -18;
  lower_eb.duration = EIGHTH * 2;
  
  note e;
  e.tone = 7;
  e.duration = EIGHTH * 2;

  note low_e;
  low_e.tone = -5;
  low_e.duration = EIGHTH * 2;

  note low_eTRIP;
  low_eTRIP.tone = -5;
  low_eTRIP.duration = EIGHTH * 8 / 3;

  note f;
  f.tone = 8;
  f.duration = EIGHTH * 2;

  note low_f;
  low_f.tone = -4;
  low_f.duration = EIGHTH * 2;

  note lower_f;
  lower_f.tone = -16;
  lower_f.duration = EIGHTH * 2;

  note lower_gb;
  lower_gb.tone = -15;
  lower_gb.duration = EIGHTH * 2;

  note low_g;
  low_g.tone = -2;
  low_g.duration = EIGHTH * 2;

  note lower_g;
  lower_g.tone = -14;
  lower_g.duration = EIGHTH * 2;

  note lower_e;
  lower_e.tone = -17;
  lower_e.duration = EIGHTH * 2;

  note lower_eTRIP;
  lower_eTRIP.tone = -17;
  lower_eTRIP.duration = EIGHTH * 8 / 3;

  note rest;
  rest.tone = REST;
  rest.duration = EIGHTH * 2;

  note lrest;
  lrest.tone = REST;
  lrest.duration = EIGHTH * 4;

  note qrest;
  qrest.tone = REST;
  qrest.duration = EIGHTH * 8;

  note dottedrest;
  dottedrest.tone = REST;
  dottedrest.duration = EIGHTH * 6;

  note high_c;
  high_c.tone = 15;
  high_c.duration = EIGHTH * 2;

  note c;
  c.tone = 3;
  c.duration = EIGHTH * 2;

  note low_c;
  low_c.tone = -9;
  low_c.duration = EIGHTH * 2;

  note low_cTRIP;
  low_cTRIP.tone = -9;
  low_cTRIP.duration = EIGHTH * 8 / 3;

  note lower_c;
  lower_c.tone = -21;
  lower_c.duration = EIGHTH * 2;

  note low_db;
  low_db.tone = -8;
  low_db.duration = EIGHTH * 2;

  note low_d;
  low_d.tone = -7;
  low_d.duration = EIGHTH * 2;

  note lower_d;
  lower_d.tone = -19;
  lower_d.duration = EIGHTH * 2;

  note high_g1;
  high_g1.tone = 10;
  high_g1.duration = EIGHTH * 2;

  note low_g1;
  low_g1.tone = -2;
  low_g1.duration = EIGHTH * 2;

  note ab;
  ab.tone = -1;
  ab.duration = EIGHTH * 2;

  note low_ab;
  low_ab.tone = -13;
  low_ab.duration = EIGHTH * 2;

  note lower_ab;
  lower_ab.tone = -25;
  lower_ab.duration = EIGHTH * 2;

  note lower_bb;
  lower_bb.tone = -23;
  lower_bb.duration = EIGHTH * 2;

  note a;
  a.tone = 0;
  a.duration = EIGHTH * 2;

  note low_a;
  low_a.tone = -12;
  low_a.duration = EIGHTH * 2;

  note high_a;
  high_a.tone = 12;
  high_a.duration = EIGHTH * 2;

  note bb;
  bb.tone = 1;
  bb.duration = EIGHTH * 2;

  note b;
  b.tone = 2;
  b.duration = EIGHTH * 2;

  note low_b;
  low_b.tone = -10;
  low_b.duration = EIGHTH * 2;

  note lower_gb1;
  lower_gb1.tone = -15;
  lower_gb1.duration = EIGHTH * 2;

  note lower_g1;
  lower_g1.tone = -14;
  lower_g1.duration = EIGHTH * 2;

  note lowest_g1;
  lowest_g1.tone = -26;
  lowest_g1.duration = EIGHTH * 2;

  note high_gb;
  high_gb.tone = 9;
  high_gb.duration = EIGHTH * 2;

  note gb;
  gb.tone = -3;
  gb.duration = EIGHTH * 2;

  note mid_d;
  mid_d.tone = 5;
  mid_d.duration = EIGHTH * 2;

  note d;
  d.tone = -7;
  d.duration = EIGHTH * 2;

  note b1;
  b1.tone = 2;
  b1.duration = EIGHTH * 2;

  // END OF NOTES DECLARATION  
  // ALLOCS

  melody.notes = memblk;
  harmony.notes = melody.notes + 300;
  bass.notes = harmony.notes + 310;

     melody.realloc_notes();
     harmony.realloc_notes();
     bass.realloc_notes();
  
  // START OF PLAYBACK

  for(int i = 0; i < 2; i++)
  {
  melody.queue(&e);
  melody.queue(&c);
  melody.queue(&rest);
  melody.queue(&low_g1);
  melody.queue(&lrest);
  melody.queue(&ab);
  melody.queue(&rest);
  melody.queue(&a);
  melody.queue(&f);
  melody.queue(&rest);
  melody.queue(&f);
  melody.queue(&a);
  melody.queue(&rest);
  melody.queue(&lrest);

  harmony.queue(&c);
  harmony.queue(&a);
  harmony.queue(&rest);
  harmony.queue(&low_e);
  harmony.queue(&lrest);
  harmony.queue(&low_e);
  harmony.queue(&rest);
  harmony.queue(&low_f);
  harmony.queue(&c);
  harmony.queue(&rest);
  harmony.queue(&c);
  harmony.queue(&low_f);
  harmony.queue(&rest);
  harmony.queue(&lrest);

  bass.queue(&lower_c);
  bass.queue(&lrest);
  bass.queue(&lower_gb1);
  bass.queue(&lower_g1);
  bass.queue(&rest);
  bass.queue(&low_c);
  bass.queue(&rest);
  bass.queue(&lower_f);
  bass.queue(&rest);
  bass.queue(&lower_f);
  bass.queue(&rest);
  bass.queue(&low_c);
  bass.queue(&low_c);
  bass.queue(&lower_f);
  bass.queue(&rest);



  melody.queue(&bTRIP);
  melody.queue(&trest);
  melody.queue(&aTRIP);
  melody.queue(&trest);
  melody.queue(&aTRIP);
  melody.queue(&trest);
  melody.queue(&aTRIP);
  melody.queue(&trest);
  melody.queue(&gTRIP);
  melody.queue(&trest);
  melody.queue(&fTRIP);
  melody.queue(&trest);
  melody.queue(&e);
  melody.queue(&c);
  melody.queue(&rest);
  melody.queue(&a);
  melody.queue(&low_g1);
  melody.queue(&rest);
  melody.queue(&lrest);

  harmony.queue(&gTRIP);
  harmony.queue(&trest);
  harmony.queue(&fTRIP);
  harmony.queue(&trest);
  harmony.queue(&fTRIP);
  harmony.queue(&trest);
  harmony.queue(&fTRIP);
  harmony.queue(&trest);
  harmony.queue(&eTRIP);
  harmony.queue(&trest);
  harmony.queue(&dTRIP);
  harmony.queue(&trest);
  harmony.queue(&c);
  harmony.queue(&a);
  harmony.queue(&rest);
  harmony.queue(&low_f);
  harmony.queue(&low_e);
  harmony.queue(&rest);
  harmony.queue(&lrest);

  bass.queue(&lower_d);
  bass.queue(&lrest);
  bass.queue(&lower_f);
  bass.queue(&lower_g1);
  bass.queue(&rest);
  bass.queue(&low_b);
  bass.queue(&rest);
  bass.queue(&lower_e);
  bass.queue(&rest);
  bass.queue(&lower_e);
  bass.queue(&rest);
  bass.queue(&low_c);
  bass.queue(&low_c);
  bass.queue(&lower_e);
  bass.queue(&rest);



  melody.queue(&e);
  melody.queue(&c);
  melody.queue(&rest);
  melody.queue(&low_g1);
  melody.queue(&lrest);
  melody.queue(&ab);
  melody.queue(&rest);
  melody.queue(&a);
  melody.queue(&f);
  melody.queue(&rest);
  melody.queue(&f);
  melody.queue(&a);
  melody.queue(&rest);
  melody.queue(&lrest);

  harmony.queue(&c);
  harmony.queue(&a);
  harmony.queue(&rest);
  harmony.queue(&low_e);
  harmony.queue(&lrest);
  harmony.queue(&low_e);
  harmony.queue(&rest);
  harmony.queue(&low_f);
  harmony.queue(&c);
  harmony.queue(&rest);
  harmony.queue(&c);
  harmony.queue(&low_f);
  harmony.queue(&rest);
  harmony.queue(&lrest);

  bass.queue(&lower_c);
  bass.queue(&lrest);
  bass.queue(&lower_gb1);
  bass.queue(&lower_g1);
  bass.queue(&rest);
  bass.queue(&low_c);
  bass.queue(&rest);
  bass.queue(&lower_f);
  bass.queue(&rest);
  bass.queue(&lower_f);
  bass.queue(&rest);
  bass.queue(&low_c);
  bass.queue(&low_c);
  bass.queue(&lower_f);
  bass.queue(&rest);


  melody.queue(&b);
  melody.queue(&f);
  melody.queue(&rest);
  melody.queue(&f);
  melody.queue(&fTRIP);
  melody.queue(&trest);
  melody.queue(&eTRIP);
  melody.queue(&trest);
  melody.queue(&dTRIP);
  melody.queue(&trest);
  melody.queue(&c);
  melody.queue(&dottedrest);
  melody.queue(&qrest);

  harmony.queue(&low_g1);
  harmony.queue(&d);
  harmony.queue(&rest);
  harmony.queue(&d);
  harmony.queue(&dTRIP);
  harmony.queue(&trest);
  harmony.queue(&cTRIP);
  harmony.queue(&trest);
  harmony.queue(&bTRIP);
  harmony.queue(&trest);
  harmony.queue(&low_g1);
  harmony.queue(&low_e);
  harmony.queue(&rest);
  harmony.queue(&low_e);
  harmony.queue(&low_c);
  harmony.queue(&dottedrest);
  
  bass.queue(&lower_g1);
  bass.queue(&lower_g1);
  bass.queue(&rest);
  bass.queue(&lower_g1);
  bass.queue(&lower_gTRIP);
  bass.queue(&trest);
  bass.queue(&lower_aTRIP);
  bass.queue(&trest);
  bass.queue(&lower_bTRIP);
  bass.queue(&trest);
  bass.queue(&low_c);
  bass.queue(&rest);
  bass.queue(&lower_g1);
  bass.queue(&rest);
  bass.queue(&lower_c);
  bass.queue(&rest);
  bass.queue(&lrest);
  }

  melody.queue(&c);
  melody.queue(&lrest);
  melody.queue(&low_g1);
  melody.queue(&lrest);
  melody.queue(&low_e);
  melody.queue(&rest);
  melody.queue(&a_sl);
  melody.queue(&b_sl);
  melody.queue(&a_sl);
  melody.queue(&ab_sl);
  melody.queue(&bb_sl);
  melody.queue(&ab_sl);
  melody.queue(&gHOLD);
  
  harmony.queue(&low_e);
  harmony.queue(&lrest);
  harmony.queue(&low_c);
  harmony.queue(&lrest);
  harmony.queue(&lower_g1);
  harmony.queue(&rest);
  harmony.queue(&slF);
  harmony.queue(&slF);
  harmony.queue(&e_sl);
  harmony.queue(&d_sl);
  harmony.queue(&eHOLD);
  
  bass.queue(&lower_g1);
  bass.queue(&lrest);
  bass.queue(&lower_e);
  bass.queue(&lrest);
  bass.queue(&lower_c);
  bass.queue(&rest);
  bass.queue(&slFF);
  bass.queue(&slDb);
  bass.queue(&cHOLD);


  note stop;
  stop.tone = STOP;
  stop.duration = 0;

  melody.queue(&stop);

  m.play();
}

