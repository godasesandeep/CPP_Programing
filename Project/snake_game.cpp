#include<iostream>
#include<conio.h>
using namespace std;

bool game_over;
int x,y;             //Position of Snake head
int fruitX,fruitY;   //Position of fruit placed
int score;
int const width =20;
int const hight =20; //size of game board
enum eDirection{STOP=0,LEFT,RIGHT,UP,DOWN}; //Enum direction of snake move
enum eDirection dir;
void setUp() //initial position/setup of game 
{
    game_over =false;
    dir=STOP;
    x=width/2;
    y=hight/2;
    fruitX =rand()%width;
    fruitY=rand()%hight;
    score=0;

}

void draw()
{
    system("cls");
    cout<<"Hi I am printing Pattern 123"<<endl;
    for(int i=0;i<hight+1;i++)
    {
        for(int j=0;j<width+1;j++)
        {
            if(i==0||j==(width) || i==(hight) ||j==0)
            {
                cout<<"#";
                //cout<<" ";
            }
            else if(i==y&&j==x)
            {
                cout<<"O";
            }
            else if(i==fruitY&&j==fruitX)
            {
                cout<<"F";
            }
            else
            {cout<<" ";}
        }
        cout<<endl;
        
    }
    cout<<"Score is : "<<score<<endl;

}

void input()
{
    if(_kbhit())
    {
        switch(_getch())
        {
            case 'a':
                dir=LEFT;
                break;
            case 'd':
                dir=RIGHT;
                break;
            case 'w':
                dir=UP;
                break;
            case 's':
                dir=DOWN;
                break;
            case 'x':
                game_over=true;
                break;    
        }
    }

}

void logic()
{
    switch(dir)
        {
            case LEFT:
                x--;
                break;
            case RIGHT:
                x++;
                break;
            case UP:
                y--;
                break;
            case DOWN:
                y++;
                break;
            case 'x':
                game_over=true;
                break; 
            default:
                break;   
        }
    if(x<0||x>width||y<0||y>hight)
    {
        game_over=true;
    }
    if(x==fruitX&&y==fruitY)
    {
        score+=10;
        fruitX =rand()%width;
        fruitY=rand()%hight;
        if(fruitX==0)
            fruitX=4;
        if(fruitY==0)
            fruitY=4;
        
        cout<<"fruit x and y is :"<<fruitX<<fruitY<<endl;
        //game_over=true;
    }
}

int main()
{
    setUp();
    while(!game_over)
    {
        draw();
        input();
        logic();
    }
    
    return 0;
}