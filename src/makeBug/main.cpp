#include <QCoreApplication>

#ifdef __cplusplus
extern "C" {//Sorry, this bug is not a qt bug, I am very sorry.
#endif
#include <openssl/sha.h>
#include <openssl/aes.h>
#include <openssl/evp.h>
#ifdef __cplusplus
}
#endif

#ifndef CPPHTTPLIB_OPENSSL_SUPPORT
#define CPPHTTPLIB_OPENSSL_SUPPORT
#endif
#include <httplib.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
