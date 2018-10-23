#include "stats.h"
#include <QString>
#include <QDebug>

QProcess proc;
double stat_percentage;
stats::stats()
{
    QString command = "bash -c \"cat /proc/loadavg | awk '{print $1}'\"";

    proc.start();
    proc.write("cat /proc/loadavg | awk '{print $1}'");
    proc.waitForFinished();

    QString op(proc.readAll());
    qDebug() << op;

}
