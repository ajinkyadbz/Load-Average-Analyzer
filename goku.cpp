#include "goku.h"
#include "stats.h"

goku::goku()
{
    setFixedWidth(320);
    setFixedHeight(240);
    setWindowFlags(Qt::CustomizeWindowHint);
    stats();
}
