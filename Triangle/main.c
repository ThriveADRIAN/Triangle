//
//  main.c
//  Triangle
//
//  Created by Adrian Bruce Cunanan on 4/5/13.
//  Copyright (c) 2013 ThriveStreams. All rights reserved.
//

#include <stdio.h>

float totalTriangle = 180.0;

float remainingAngle(float firstAngle, float secondAngle)
{
    float thirdAngle;
    thirdAngle = totalTriangle - firstAngle - secondAngle;
    return thirdAngle;
}

int main(int argc, const char * argv[])
{

    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngle(angleA, angleB);
    printf("The third angle is %.2f\n", angleC);
    return 0;
}

