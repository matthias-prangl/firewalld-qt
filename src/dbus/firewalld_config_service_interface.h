/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp firewalld-config-service.xml -p firewalld_config_service_interface -i generictypes.h -V
 *
 * qdbusxml2cpp is Copyright (C) 2023 The Qt Company Ltd and other contributors.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef FIREWALLD_CONFIG_SERVICE_INTERFACE_H
#define FIREWALLD_CONFIG_SERVICE_INTERFACE_H

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
 * Proxy class for interface org.fedoraproject.FirewallD1.config.service
 */
class OrgFedoraprojectFirewallD1ConfigServiceInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.fedoraproject.FirewallD1.config.service"; }

public:
    OrgFedoraprojectFirewallD1ConfigServiceInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgFedoraprojectFirewallD1ConfigServiceInterface();

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
    inline QDBusPendingReply<> addInclude(const QString &include)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(include);
        return asyncCallWithArgumentList(QStringLiteral("addInclude"), argumentList);
    }

    inline QDBusPendingReply<> addPort(const QString &port, const QString &protocol)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(port) << QVariant::fromValue(protocol);
        return asyncCallWithArgumentList(QStringLiteral("addPort"), argumentList);
    }

    inline QDBusPendingReply<> addProtocol(const QString &protocol)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(protocol);
        return asyncCallWithArgumentList(QStringLiteral("addProtocol"), argumentList);
    }

    inline QDBusPendingReply<> addSourcePort(const QString &port, const QString &protocol)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(port) << QVariant::fromValue(protocol);
        return asyncCallWithArgumentList(QStringLiteral("addSourcePort"), argumentList);
    }

    inline QDBusPendingReply<QString> getDescription()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getDescription"), argumentList);
    }

    inline QDBusPendingReply<QString> getDestination(const QString &family)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(family);
        return asyncCallWithArgumentList(QStringLiteral("getDestination"), argumentList);
    }

    inline QDBusPendingReply<FWStringMap> getDestinations()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getDestinations"), argumentList);
    }

    inline QDBusPendingReply<QStringList> getIncludes()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getIncludes"), argumentList);
    }

    inline QDBusPendingReply<FWPortList> getPorts()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getPorts"), argumentList);
    }

    inline QDBusPendingReply<QStringList> getProtocols()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getProtocols"), argumentList);
    }

    inline QDBusPendingReply<QVariantMap> getSettings2()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getSettings2"), argumentList);
    }

    inline QDBusPendingReply<QString> getShort()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getShort"), argumentList);
    }

    inline QDBusPendingReply<FWPortList> getSourcePorts()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getSourcePorts"), argumentList);
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

    inline QDBusPendingReply<bool> queryDestination(const QString &family, const QString &address)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(family) << QVariant::fromValue(address);
        return asyncCallWithArgumentList(QStringLiteral("queryDestination"), argumentList);
    }

    inline QDBusPendingReply<bool> queryInclude(const QString &include)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(include);
        return asyncCallWithArgumentList(QStringLiteral("queryInclude"), argumentList);
    }

    inline QDBusPendingReply<bool> queryPort(const QString &port, const QString &protocol)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(port) << QVariant::fromValue(protocol);
        return asyncCallWithArgumentList(QStringLiteral("queryPort"), argumentList);
    }

    inline QDBusPendingReply<bool> queryProtocol(const QString &protocol)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(protocol);
        return asyncCallWithArgumentList(QStringLiteral("queryProtocol"), argumentList);
    }

    inline QDBusPendingReply<bool> querySourcePort(const QString &port, const QString &protocol)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(port) << QVariant::fromValue(protocol);
        return asyncCallWithArgumentList(QStringLiteral("querySourcePort"), argumentList);
    }

    inline QDBusPendingReply<> remove()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("remove"), argumentList);
    }

    inline QDBusPendingReply<> removeDestination(const QString &family)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(family);
        return asyncCallWithArgumentList(QStringLiteral("removeDestination"), argumentList);
    }

    inline QDBusPendingReply<> removeInclude(const QString &include)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(include);
        return asyncCallWithArgumentList(QStringLiteral("removeInclude"), argumentList);
    }

    inline QDBusPendingReply<> removePort(const QString &port, const QString &protocol)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(port) << QVariant::fromValue(protocol);
        return asyncCallWithArgumentList(QStringLiteral("removePort"), argumentList);
    }

    inline QDBusPendingReply<> removeProtocol(const QString &protocol)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(protocol);
        return asyncCallWithArgumentList(QStringLiteral("removeProtocol"), argumentList);
    }

    inline QDBusPendingReply<> removeSourcePort(const QString &port, const QString &protocol)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(port) << QVariant::fromValue(protocol);
        return asyncCallWithArgumentList(QStringLiteral("removeSourcePort"), argumentList);
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

    inline QDBusPendingReply<> setDestination(const QString &family, const QString &address)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(family) << QVariant::fromValue(address);
        return asyncCallWithArgumentList(QStringLiteral("setDestination"), argumentList);
    }

    inline QDBusPendingReply<> setDestinations(FWStringMap destinations)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(destinations);
        return asyncCallWithArgumentList(QStringLiteral("setDestinations"), argumentList);
    }

    inline QDBusPendingReply<> setIncludes(const QStringList &includes)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(includes);
        return asyncCallWithArgumentList(QStringLiteral("setIncludes"), argumentList);
    }

    inline QDBusPendingReply<> setPorts(FWPortList ports)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(ports);
        return asyncCallWithArgumentList(QStringLiteral("setPorts"), argumentList);
    }

    inline QDBusPendingReply<> setProtocols(const QStringList &protocols)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(protocols);
        return asyncCallWithArgumentList(QStringLiteral("setProtocols"), argumentList);
    }

    // rename argument short to shortName as short is a reserved keyword
    inline QDBusPendingReply<> setShort(const QString &shortName)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(shortName);
        return asyncCallWithArgumentList(QStringLiteral("setShort"), argumentList);
    }

    inline QDBusPendingReply<> setSourcePorts(FWPortList ports)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(ports);
        return asyncCallWithArgumentList(QStringLiteral("setSourcePorts"), argumentList);
    }

    inline QDBusPendingReply<> setVersion(const QString &version)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(version);
        return asyncCallWithArgumentList(QStringLiteral("setVersion"), argumentList);
    }

    inline QDBusPendingReply<> update2(const QVariantMap &settings)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(settings);
        return asyncCallWithArgumentList(QStringLiteral("update2"), argumentList);
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
        using service = ::OrgFedoraprojectFirewallD1ConfigServiceInterface;
      }
    }
  }
}
#endif
