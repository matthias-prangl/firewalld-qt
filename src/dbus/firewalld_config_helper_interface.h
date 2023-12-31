/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp firewalld-config-helper.xml -p firewalld_config_helper_interface -i generictypes.h -V
 *
 * qdbusxml2cpp is Copyright (C) 2023 The Qt Company Ltd and other contributors.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef FIREWALLD_CONFIG_HELPER_INTERFACE_H
#define FIREWALLD_CONFIG_HELPER_INTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "generictypes.h"

/*
 * Proxy class for interface org.fedoraproject.FirewallD1.config.helper
 */
class OrgFedoraprojectFirewallD1ConfigHelperInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.fedoraproject.FirewallD1.config.helper"; }

public:
    OrgFedoraprojectFirewallD1ConfigHelperInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgFedoraprojectFirewallD1ConfigHelperInterface();

    Q_PROPERTY(bool builtin READ builtin)
    inline bool builtin() const
    { return qvariant_cast< bool >(property("builtin")); }

    // Renamed from default to isDefeault, as default is a keyword and not allowed
    Q_PROPERTY(bool isDefault READ isDefault)
    inline bool isDefault() const
    { return qvariant_cast< bool >(property("default")); }

    Q_PROPERTY(QString filename READ filename)
    inline QString filename() const
    { return qvariant_cast< QString >(property("filename")); }

    Q_PROPERTY(QString name READ name)
    inline QString name() const
    { return qvariant_cast< QString >(property("name")); }

    Q_PROPERTY(QString path READ path)
    inline QString path() const
    { return qvariant_cast< QString >(property("path")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> addPort(const QString &port, const QString &protocol)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(port) << QVariant::fromValue(protocol);
        return asyncCallWithArgumentList(QStringLiteral("addPort"), argumentList);
    }

    inline QDBusPendingReply<QString> getDescription()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getDescription"), argumentList);
    }

    inline QDBusPendingReply<QString> getFamily()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getFamily"), argumentList);
    }

    inline QDBusPendingReply<QString> getModule()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getModule"), argumentList);
    }

    inline QDBusPendingReply<FWPortList> getPorts()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getPorts"), argumentList);
    }

    inline QDBusPendingReply<FWHelperSettings> getSettings()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getSettings"), argumentList);
    }

    inline QDBusPendingReply<QString> getShort()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getShort"), argumentList);
    }

    inline QDBusPendingReply<QString> getVersion()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getVersion"), argumentList);
    }

    inline QDBusPendingReply<> loadDefaults()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("loadDefaults"), argumentList);
    }

    inline QDBusPendingReply<bool> queryFamily(const QString &ipv)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(ipv);
        return asyncCallWithArgumentList(QStringLiteral("queryFamily"), argumentList);
    }

    inline QDBusPendingReply<bool> queryModule(const QString &module)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(module);
        return asyncCallWithArgumentList(QStringLiteral("queryModule"), argumentList);
    }

    inline QDBusPendingReply<bool> queryPort(const QString &port, const QString &protocol)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(port) << QVariant::fromValue(protocol);
        return asyncCallWithArgumentList(QStringLiteral("queryPort"), argumentList);
    }

    inline QDBusPendingReply<> remove()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("remove"), argumentList);
    }

    inline QDBusPendingReply<> removePort(const QString &port, const QString &protocol)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(port) << QVariant::fromValue(protocol);
        return asyncCallWithArgumentList(QStringLiteral("removePort"), argumentList);
    }

    inline QDBusPendingReply<> rename(const QString &name)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(name);
        return asyncCallWithArgumentList(QStringLiteral("rename"), argumentList);
    }

    inline QDBusPendingReply<> setDescription(const QString &description)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(description);
        return asyncCallWithArgumentList(QStringLiteral("setDescription"), argumentList);
    }

    inline QDBusPendingReply<> setFamily(const QString &ipv)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(ipv);
        return asyncCallWithArgumentList(QStringLiteral("setFamily"), argumentList);
    }

    inline QDBusPendingReply<> setModule(const QString &module)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(module);
        return asyncCallWithArgumentList(QStringLiteral("setModule"), argumentList);
    }

    inline QDBusPendingReply<> setPorts(FWPortList ports)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(ports);
        return asyncCallWithArgumentList(QStringLiteral("setPorts"), argumentList);
    }

    // rename argument short to shortName as short is a reserved keyword
    inline QDBusPendingReply<> setShort(const QString &shortName)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(shortName);
        return asyncCallWithArgumentList(QStringLiteral("setShort"), argumentList);
    }

    inline QDBusPendingReply<> setVersion(const QString &version)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(version);
        return asyncCallWithArgumentList(QStringLiteral("setVersion"), argumentList);
    }

    inline QDBusPendingReply<> update(FWHelperSettings settings)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(settings);
        return asyncCallWithArgumentList(QStringLiteral("update"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void Removed(const QString &name);
    void Renamed(const QString &name);
    void Updated(const QString &name);
};

namespace org {
  namespace fedoraproject {
    namespace FirewallD1 {
      namespace config {
        using helper = ::OrgFedoraprojectFirewallD1ConfigHelperInterface;
      }
    }
  }
}
#endif
