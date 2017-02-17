#include <jni.h>
#include <opencv2/core.hpp>

#include "opencvconcept.h"

using namespace std;
using namespace cv;

extern "C" {
jlong
Java_co_vispera_sharkpano_MainActivity_opencvconceptNew(JNIEnv *, jobject) {
    return (long)(new OpenCVConcept::OpenCVConcept());
}

void
Java_co_vispera_sharkpano_MainActivity_opencvconceptDelete(JNIEnv *, jobject, jlong ptr) {
    delete (OpenCVConcept *)(ptr);
}

int
Java_co_vispera_sharkpano_MainActivity_opencvconceptGetRows(JNIEnv *, jobject, jlong ptr) {

    OpenCVConcept *obj = (OpenCVConcept *)ptr;

    return obj->rows();
}

}