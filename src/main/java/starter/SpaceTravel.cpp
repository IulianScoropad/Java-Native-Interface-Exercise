#include<jni.h>
#include "../starter/starter_SpaceTravel.h"


JNIEXPORT jint JNICALL Java_starter_SpaceTravel_measureDistance(JNIEnv *, jobject obj, jdouble s, jdoublet){
    int distance = s*t;

    return distance;

}

