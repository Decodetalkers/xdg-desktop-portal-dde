#include "filechooser.h"
#include <QLoggingCategory>
#include <qloggingcategory.h>

Q_LOGGING_CATEGORY(XdgDesktopDDEFileChooser, "xdg-dde-filechooser")
FileChooserProtal::FileChooserProtal(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
}

uint FileChooserProtal::OpenFile(const QDBusObjectPath &handle,
                                 const QString &app_id,
                                 const QString &parent_window,
                                 const QString &title,
                                 const QVariantMap &options,
                                 QVariantMap &results)
{
    qCDebug(XdgDesktopDDEFileChooser) << "start OpenFile";
    return 1;
}
uint FileChooserProtal::SaveFile(const QDBusObjectPath &handle,
                                 const QString &app_id,
                                 const QString &parent_window,
                                 const QString &title,
                                 const QVariantMap &options,
                                 QVariantMap &results)
{
    qCDebug(XdgDesktopDDEFileChooser) << "start SaveFile";
    return 1;
}
