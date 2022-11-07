#include "lockdown.h"
#include <QLoggingCategory>
Q_LOGGING_CATEGORY(XdgDesktopDDELockDown, "xdg-dde-lockdown")

LockdownProtal::LockdownProtal(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    qCDebug(XdgDesktopDDELockDown) << "lockdown init";
}
