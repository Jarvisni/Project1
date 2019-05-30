
void go_front();
void go_left();
void go_right();
int getLeftIrStat();
int getRightIrStat();
void fuck_stop();
int getLeftGreyStat();
int getRightGreyStat();

void setup()
{
    //servo
    pinMode(10,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(9,OUTPUT);

    //ir
    pinMode(14,INPUT);
    pinMode(18,INPUT);

    //serial
    Serial.begin(9600);
}

#define LEFT_F 6
#define LEFT_B 5
#define RIGHT_B 9
#define RIGHT_F 10

#define LEFT_IR 14
#define RIGHT_IR 18
#define LEFT_GREY 16
#define RIGHT_GREY 17

#define FRONT_SPEED_L 240
#define FRONT_SPEED_R 220
#define TURN_OFFSET 160

void loop()
{
    // go_front();
    // delay(3000);
    // go_left();
    // delay(3000);
    // go_right();
    // delay(3000);

    // if(getLeftIrStat()==0 && getRightIrStat()!=0)
    // {
    //     go_left();
    // }
    // else if(getLeftIrStat()!=0 && getRightIrStat()==0)
    // {
    //     go_right();
    // }
    // else if(getLeftIrStat()==0 && getRightIrStat()==0)
    // {
    //     go_front();
    // }
    // else
    // {
    //     fuck_stop();
    // }
    // if(getLeftGreyStat()!=0 && getRightGreyStat()==0)
    // {
    //     go_right();
    // }
    // else if(getLeftGreyStat()==0 && getRightGreyStat()!=0)
    // {
    //     go_left();
    // }
    // else
    // {
    //     go_front();
    // }
    // while(1)
    // {
    //     delay(1000);
    //     Serial.print("abc");
    // }
    char mode=Serial.read();
    Serial.print("Get mode:");
    Serial.print(mode);
    Serial.print("\n");
    
    if(mode == '1')
    {
        Serial.print("Mode 1");
        while(1)
        {
            char stat=Serial.read();
            Serial.print("Loop 1 running");
            if(stat == '0')
                break;
            if(getLeftIrStat()==0 && getRightIrStat()!=0)
            {
                go_left();
            }
            else if(getLeftIrStat()!=0 && getRightIrStat()==0)
            {
                go_right();
            }
            else if(getLeftIrStat()==0 && getRightIrStat()==0)
            {
                go_front();
            }
            else
            {
                fuck_stop();
            }
        }
    }
    else if(mode=='2')
    {
        while(1)
        {
            char stat=Serial.read();
            if(stat == '0')
                break;
            if(getLeftGreyStat()!=0 && getRightGreyStat()==0)
            {
                go_right();
            }
            else if(getLeftGreyStat()==0 && getRightGreyStat()!=0)
            {
                go_left();
            }
            else
            {
                go_front();
            }
        }
    }
    else
    {
        fuck_stop();
    }
    

}

void go_front()
{
    analogWrite(LEFT_F,FRONT_SPEED_L);
    analogWrite(RIGHT_F,FRONT_SPEED_R);
    analogWrite(LEFT_B,0);
    analogWrite(RIGHT_B,0);

}

void go_left()
{
    analogWrite(LEFT_F,FRONT_SPEED_L-TURN_OFFSET);
    analogWrite(RIGHT_F,FRONT_SPEED_R);
    analogWrite(LEFT_B,0);
    analogWrite(RIGHT_B,0);
}

void go_right()
{
    analogWrite(LEFT_F,FRONT_SPEED_L);
    analogWrite(RIGHT_F,FRONT_SPEED_R-TURN_OFFSET);
    analogWrite(LEFT_B,0);
    analogWrite(RIGHT_B,0);
}

void fuck_stop()
{
    analogWrite(LEFT_F,0);
    analogWrite(RIGHT_F,0);
    analogWrite(LEFT_B,0);
    analogWrite(RIGHT_B,0);
}

int getLeftIrStat()
{
    return digitalRead(LEFT_IR);
}

int getRightIrStat()
{
    return digitalRead(RIGHT_IR);
}

int getLeftGreyStat()
{
    return digitalRead(LEFT_GREY);
}

int getRightGreyStat()
{
    return digitalRead(RIGHT_GREY);
}
