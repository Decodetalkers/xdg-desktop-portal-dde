#include "globalshotcut.h"
#include <QLoggingCategory>

Q_LOGGING_CATEGORY(XdgDesktopDDEGlobalShotCut, "xdg-dde-globalshotcut")

GlobalShotCutProtal::GlobalShotCutProtal(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    qCDebug(XdgDesktopDDEGlobalShotCut) << "init globalshotcut";
}

uint GlobalShotCutProtal::CreateSession(const QDBusObjectPath &handle,
                                        const QDBusObjectPath &session_handle,
                                        const QString &app_id,
                                        const QVariantMap &options,
                                        QVariantMap &results)
{
    qCDebug(XdgDesktopDDEGlobalShotCut) << "create session";
    return 1;
}

QVariantMap GlobalShotCutProtal::BindShortCuts(const QDBusObjectPath &handle,
                                               const QDBusObjectPath &session_handle,
                                               const QVariantMap &shortcuts,
                                               const QString &parent_window,
                                               const QVariantMap &options)
{
    qCDebug(XdgDesktopDDEGlobalShotCut) << "BindShortCuts";
    return QVariantMap();
}

QVariantMap GlobalShotCutProtal::ListShortCuts(const QDBusObjectPath &handle, const QDBusObjectPath &session_handle)
{
    qCDebug(XdgDesktopDDEGlobalShotCut) << "get ShortCuts";
    return QVariantMap();
}
