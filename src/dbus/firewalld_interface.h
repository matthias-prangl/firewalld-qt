/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp firewalld.xml -p firewalld_interface -i generictypes.h -V
 *
 * qdbusxml2cpp is Copyright (C) 2023 The Qt Company Ltd and other contributors.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef FIREWALLD_INTERFACE_H
#define FIREWALLD_INTERFACE_H

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
 * Proxy class for interface org.fedoraproject.FirewallD1
 */
class OrgFedoraprojectFirewallD1Interface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.fedoraproject.FirewallD1"; }

public:
    OrgFedoraprojectFirewallD1Interface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgFedoraprojectFirewallD1Interface();

    Q_PROPERTY(bool BRIDGE READ bRIDGE)
    inline bool bRIDGE() const
    { return qvariant_cast< bool >(property("BRIDGE")); }

    Q_PROPERTY(bool IPSet READ iPSet)
    inline bool iPSet() const
    { return qvariant_cast< bool >(property("IPSet")); }

    Q_PROPERTY(QStringList IPSetTypes READ iPSetTypes)
    inline QStringList iPSetTypes() const
    { return qvariant_cast< QStringList >(property("IPSetTypes")); }

    Q_PROPERTY(bool IPv4 READ iPv4)
    inline bool iPv4() const
    { return qvariant_cast< bool >(property("IPv4")); }

    Q_PROPERTY(QStringList IPv4ICMPTypes READ iPv4ICMPTypes)
    inline QStringList iPv4ICMPTypes() const
    { return qvariant_cast< QStringList >(property("IPv4ICMPTypes")); }

    Q_PROPERTY(bool IPv6 READ iPv6)
    inline bool iPv6() const
    { return qvariant_cast< bool >(property("IPv6")); }

    Q_PROPERTY(QStringList IPv6ICMPTypes READ iPv6ICMPTypes)
    inline QStringList iPv6ICMPTypes() const
    { return qvariant_cast< QStringList >(property("IPv6ICMPTypes")); }

    Q_PROPERTY(bool IPv6_rpfilter READ iPv6_rpfilter)
    inline bool iPv6_rpfilter() const
    { return qvariant_cast< bool >(property("IPv6_rpfilter")); }

    Q_PROPERTY(QString interface_version READ interface_version)
    inline QString interface_version() const
    { return qvariant_cast< QString >(property("interface_version")); }

    Q_PROPERTY(QString state READ state)
    inline QString state() const
    { return qvariant_cast< QString >(property("state")); }

    Q_PROPERTY(QString version READ version)
    inline QString version() const
    { return qvariant_cast< QString >(property("version")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> authorizeAll()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("authorizeAll"), argumentList);
    }

    inline QDBusPendingReply<> checkPermanentConfig()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("checkPermanentConfig"), argumentList);
    }

    inline QDBusPendingReply<> completeReload()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("completeReload"), argumentList);
    }

    inline QDBusPendingReply<> disablePanicMode()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("disablePanicMode"), argumentList);
    }

    inline QDBusPendingReply<> enablePanicMode()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("enablePanicMode"), argumentList);
    }

    inline QDBusPendingReply<QString> getDefaultZone()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getDefaultZone"), argumentList);
    }

    inline QDBusPendingReply<FWHelperSettings> getHelperSettings(const QString &helper)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(helper);
        return asyncCallWithArgumentList(QStringLiteral("getHelperSettings"), argumentList);
    }

    inline QDBusPendingReply<QStringList> getHelpers()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getHelpers"), argumentList);
    }

    inline QDBusPendingReply<FWIcmpTypeSettings> getIcmpTypeSettings(const QString &icmptype)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(icmptype);
        return asyncCallWithArgumentList(QStringLiteral("getIcmpTypeSettings"), argumentList);
    }

    inline QDBusPendingReply<QString> getLogDenied()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getLogDenied"), argumentList);
    }

    inline QDBusPendingReply<QVariantMap> getServiceSettings2(const QString &service)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(service);
        return asyncCallWithArgumentList(QStringLiteral("getServiceSettings2"), argumentList);
    }

    inline QDBusPendingReply<QStringList> listIcmpTypes()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("listIcmpTypes"), argumentList);
    }

    inline QDBusPendingReply<QStringList> listServices()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("listServices"), argumentList);
    }

    inline QDBusPendingReply<bool> queryPanicMode()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("queryPanicMode"), argumentList);
    }

    inline QDBusPendingReply<> reload()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("reload"), argumentList);
    }

    inline QDBusPendingReply<> resetToDefaults()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("resetToDefaults"), argumentList);
    }

    inline QDBusPendingReply<> runtimeToPermanent()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("runtimeToPermanent"), argumentList);
    }

    inline QDBusPendingReply<> setAutomaticHelpers(const QString &value)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(value);
        return asyncCallWithArgumentList(QStringLiteral("setAutomaticHelpers"), argumentList);
    }

    inline QDBusPendingReply<> setDefaultZone(const QString &zone)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone);
        return asyncCallWithArgumentList(QStringLiteral("setDefaultZone"), argumentList);
    }

    inline QDBusPendingReply<> setLogDenied(const QString &value)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(value);
        return asyncCallWithArgumentList(QStringLiteral("setLogDenied"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void AutomaticHelpersChanged(const QString &value);
    void DefaultZoneChanged(const QString &zone);
    void LogDeniedChanged(const QString &value);
    void PanicModeDisabled();
    void PanicModeEnabled();
    void Reloaded();
};

/*
 * Proxy class for interface org.fedoraproject.FirewallD1.ipset
 */
class OrgFedoraprojectFirewallD1IpsetInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.fedoraproject.FirewallD1.ipset"; }

public:
    OrgFedoraprojectFirewallD1IpsetInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgFedoraprojectFirewallD1IpsetInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> addEntry(const QString &ipset, const QString &entry)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(ipset) << QVariant::fromValue(entry);
        return asyncCallWithArgumentList(QStringLiteral("addEntry"), argumentList);
    }

    inline QDBusPendingReply<QStringList> getEntries(const QString &ipset)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(ipset);
        return asyncCallWithArgumentList(QStringLiteral("getEntries"), argumentList);
    }

    inline QDBusPendingReply<FWIPSetSettings> getIPSetSettings(const QString &ipset)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(ipset);
        return asyncCallWithArgumentList(QStringLiteral("getIPSetSettings"), argumentList);
    }

    inline QDBusPendingReply<QStringList> getIPSets()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getIPSets"), argumentList);
    }

    inline QDBusPendingReply<bool> queryEntry(const QString &ipset, const QString &entry)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(ipset) << QVariant::fromValue(entry);
        return asyncCallWithArgumentList(QStringLiteral("queryEntry"), argumentList);
    }

    inline QDBusPendingReply<bool> queryIPSet(const QString &ipset)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(ipset);
        return asyncCallWithArgumentList(QStringLiteral("queryIPSet"), argumentList);
    }

    inline QDBusPendingReply<> removeEntry(const QString &ipset, const QString &entry)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(ipset) << QVariant::fromValue(entry);
        return asyncCallWithArgumentList(QStringLiteral("removeEntry"), argumentList);
    }

    inline QDBusPendingReply<> setEntries(const QString &ipset, const QStringList &entries)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(ipset) << QVariant::fromValue(entries);
        return asyncCallWithArgumentList(QStringLiteral("setEntries"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void EntryAdded(const QString &ipset, const QString &entry);
    void EntryRemoved(const QString &ipset, const QString &entry);
};

/*
 * Proxy class for interface org.fedoraproject.FirewallD1.policies
 */
class OrgFedoraprojectFirewallD1PoliciesInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.fedoraproject.FirewallD1.policies"; }

public:
    OrgFedoraprojectFirewallD1PoliciesInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgFedoraprojectFirewallD1PoliciesInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> addLockdownWhitelistCommand(const QString &command)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(command);
        return asyncCallWithArgumentList(QStringLiteral("addLockdownWhitelistCommand"), argumentList);
    }

    inline QDBusPendingReply<> addLockdownWhitelistContext(const QString &context)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(context);
        return asyncCallWithArgumentList(QStringLiteral("addLockdownWhitelistContext"), argumentList);
    }

    inline QDBusPendingReply<> addLockdownWhitelistUid(int uid)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(uid);
        return asyncCallWithArgumentList(QStringLiteral("addLockdownWhitelistUid"), argumentList);
    }

    inline QDBusPendingReply<> addLockdownWhitelistUser(const QString &user)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(user);
        return asyncCallWithArgumentList(QStringLiteral("addLockdownWhitelistUser"), argumentList);
    }

    inline QDBusPendingReply<> disableLockdown()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("disableLockdown"), argumentList);
    }

    inline QDBusPendingReply<> enableLockdown()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("enableLockdown"), argumentList);
    }

    inline QDBusPendingReply<QStringList> getLockdownWhitelistCommands()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getLockdownWhitelistCommands"), argumentList);
    }

    inline QDBusPendingReply<QStringList> getLockdownWhitelistContexts()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getLockdownWhitelistContexts"), argumentList);
    }

    inline QDBusPendingReply<IntList> getLockdownWhitelistUids()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getLockdownWhitelistUids"), argumentList);
    }

    inline QDBusPendingReply<QStringList> getLockdownWhitelistUsers()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getLockdownWhitelistUsers"), argumentList);
    }

    inline QDBusPendingReply<bool> queryLockdown()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("queryLockdown"), argumentList);
    }

    inline QDBusPendingReply<bool> queryLockdownWhitelistCommand(const QString &command)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(command);
        return asyncCallWithArgumentList(QStringLiteral("queryLockdownWhitelistCommand"), argumentList);
    }

    inline QDBusPendingReply<bool> queryLockdownWhitelistContext(const QString &context)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(context);
        return asyncCallWithArgumentList(QStringLiteral("queryLockdownWhitelistContext"), argumentList);
    }

    inline QDBusPendingReply<bool> queryLockdownWhitelistUid(int uid)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(uid);
        return asyncCallWithArgumentList(QStringLiteral("queryLockdownWhitelistUid"), argumentList);
    }

    inline QDBusPendingReply<bool> queryLockdownWhitelistUser(const QString &user)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(user);
        return asyncCallWithArgumentList(QStringLiteral("queryLockdownWhitelistUser"), argumentList);
    }

    inline QDBusPendingReply<> removeLockdownWhitelistCommand(const QString &command)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(command);
        return asyncCallWithArgumentList(QStringLiteral("removeLockdownWhitelistCommand"), argumentList);
    }

    inline QDBusPendingReply<> removeLockdownWhitelistContext(const QString &context)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(context);
        return asyncCallWithArgumentList(QStringLiteral("removeLockdownWhitelistContext"), argumentList);
    }

    inline QDBusPendingReply<> removeLockdownWhitelistUid(int uid)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(uid);
        return asyncCallWithArgumentList(QStringLiteral("removeLockdownWhitelistUid"), argumentList);
    }

    inline QDBusPendingReply<> removeLockdownWhitelistUser(const QString &user)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(user);
        return asyncCallWithArgumentList(QStringLiteral("removeLockdownWhitelistUser"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void LockdownDisabled();
    void LockdownEnabled();
    void LockdownWhitelistCommandAdded(const QString &command);
    void LockdownWhitelistCommandRemoved(const QString &command);
    void LockdownWhitelistContextAdded(const QString &context);
    void LockdownWhitelistContextRemoved(const QString &context);
    void LockdownWhitelistUidAdded(int uid);
    void LockdownWhitelistUidRemoved(int uid);
    void LockdownWhitelistUserAdded(const QString &user);
    void LockdownWhitelistUserRemoved(const QString &user);
};

/*
 * Proxy class for interface org.fedoraproject.FirewallD1.policy
 */
class OrgFedoraprojectFirewallD1PolicyInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.fedoraproject.FirewallD1.policy"; }

public:
    OrgFedoraprojectFirewallD1PolicyInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgFedoraprojectFirewallD1PolicyInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QVariantMap> getActivePolicies()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getActivePolicies"), argumentList);
    }

    inline QDBusPendingReply<QStringList> getPolicies()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getPolicies"), argumentList);
    }

    inline QDBusPendingReply<QVariantMap> getPolicySettings(const QString &policy)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(policy);
        return asyncCallWithArgumentList(QStringLiteral("getPolicySettings"), argumentList);
    }

    inline QDBusPendingReply<> setPolicySettings(const QString &policy, const QVariant &settings)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(policy) << QVariant::fromValue(settings);
        return asyncCallWithArgumentList(QStringLiteral("setPolicySettings"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void PolicyUpdated(const QString &policy, const QVariantMap &settings);
};

/*
 * Proxy class for interface org.fedoraproject.FirewallD1.zone
 */
class OrgFedoraprojectFirewallD1ZoneInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.fedoraproject.FirewallD1.zone"; }

public:
    OrgFedoraprojectFirewallD1ZoneInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgFedoraprojectFirewallD1ZoneInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QString> addForwardPort(const QString &zone, const QString &port, const QString &protocol, const QString &toport, const QString &toaddr, int timeout)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(port) << QVariant::fromValue(protocol) << QVariant::fromValue(toport) << QVariant::fromValue(toaddr) << QVariant::fromValue(timeout);
        return asyncCallWithArgumentList(QStringLiteral("addForwardPort"), argumentList);
    }

    inline QDBusPendingReply<QString> addIcmpBlock(const QString &zone, const QString &icmp, int timeout)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(icmp) << QVariant::fromValue(timeout);
        return asyncCallWithArgumentList(QStringLiteral("addIcmpBlock"), argumentList);
    }

    inline QDBusPendingReply<QString> addIcmpBlockInversion(const QString &zone)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone);
        return asyncCallWithArgumentList(QStringLiteral("addIcmpBlockInversion"), argumentList);
    }

    inline QDBusPendingReply<QString> addInterface(const QString &zone, const QString &interface)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(interface);
        return asyncCallWithArgumentList(QStringLiteral("addInterface"), argumentList);
    }

    inline QDBusPendingReply<QString> addMasquerade(const QString &zone, int timeout)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(timeout);
        return asyncCallWithArgumentList(QStringLiteral("addMasquerade"), argumentList);
    }

    inline QDBusPendingReply<QString> addPort(const QString &zone, const QString &port, const QString &protocol, int timeout)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(port) << QVariant::fromValue(protocol) << QVariant::fromValue(timeout);
        return asyncCallWithArgumentList(QStringLiteral("addPort"), argumentList);
    }

    inline QDBusPendingReply<QString> addProtocol(const QString &zone, const QString &protocol, int timeout)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(protocol) << QVariant::fromValue(timeout);
        return asyncCallWithArgumentList(QStringLiteral("addProtocol"), argumentList);
    }

    inline QDBusPendingReply<QString> addRichRule(const QString &zone, const QString &rule, int timeout)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(rule) << QVariant::fromValue(timeout);
        return asyncCallWithArgumentList(QStringLiteral("addRichRule"), argumentList);
    }

    inline QDBusPendingReply<QString> addService(const QString &zone, const QString &service, int timeout)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(service) << QVariant::fromValue(timeout);
        return asyncCallWithArgumentList(QStringLiteral("addService"), argumentList);
    }

    inline QDBusPendingReply<QString> addSource(const QString &zone, const QString &source)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(source);
        return asyncCallWithArgumentList(QStringLiteral("addSource"), argumentList);
    }

    inline QDBusPendingReply<QString> addSourcePort(const QString &zone, const QString &port, const QString &protocol, int timeout)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(port) << QVariant::fromValue(protocol) << QVariant::fromValue(timeout);
        return asyncCallWithArgumentList(QStringLiteral("addSourcePort"), argumentList);
    }

    inline QDBusPendingReply<QString> changeZoneOfInterface(const QString &zone, const QString &interface)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(interface);
        return asyncCallWithArgumentList(QStringLiteral("changeZoneOfInterface"), argumentList);
    }

    inline QDBusPendingReply<QString> changeZoneOfSource(const QString &zone, const QString &source)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(source);
        return asyncCallWithArgumentList(QStringLiteral("changeZoneOfSource"), argumentList);
    }

    inline QDBusPendingReply<FWActiveZoneMap> getActiveZones()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getActiveZones"), argumentList);
    }

    inline QDBusPendingReply<FWPortArray> getForwardPorts(const QString &zone)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone);
        return asyncCallWithArgumentList(QStringLiteral("getForwardPorts"), argumentList);
    }

    inline QDBusPendingReply<QStringList> getIcmpBlocks(const QString &zone)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone);
        return asyncCallWithArgumentList(QStringLiteral("getIcmpBlocks"), argumentList);
    }

    inline QDBusPendingReply<QStringList> getInterfaces(const QString &zone)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone);
        return asyncCallWithArgumentList(QStringLiteral("getInterfaces"), argumentList);
    }

    inline QDBusPendingReply<FWPortArray> getPorts(const QString &zone)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone);
        return asyncCallWithArgumentList(QStringLiteral("getPorts"), argumentList);
    }

    inline QDBusPendingReply<QStringList> getProtocols(const QString &zone)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone);
        return asyncCallWithArgumentList(QStringLiteral("getProtocols"), argumentList);
    }

    inline QDBusPendingReply<QStringList> getRichRules(const QString &zone)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone);
        return asyncCallWithArgumentList(QStringLiteral("getRichRules"), argumentList);
    }

    inline QDBusPendingReply<QStringList> getServices(const QString &zone)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone);
        return asyncCallWithArgumentList(QStringLiteral("getServices"), argumentList);
    }

    inline QDBusPendingReply<FWPortArray> getSourcePorts(const QString &zone)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone);
        return asyncCallWithArgumentList(QStringLiteral("getSourcePorts"), argumentList);
    }

    inline QDBusPendingReply<QStringList> getSources(const QString &zone)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone);
        return asyncCallWithArgumentList(QStringLiteral("getSources"), argumentList);
    }

    inline QDBusPendingReply<QString> getZoneOfInterface(const QString &interface)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(interface);
        return asyncCallWithArgumentList(QStringLiteral("getZoneOfInterface"), argumentList);
    }

    inline QDBusPendingReply<QString> getZoneOfSource(const QString &source)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(source);
        return asyncCallWithArgumentList(QStringLiteral("getZoneOfSource"), argumentList);
    }

    inline QDBusPendingReply<QVariantMap> getZoneSettings2(const QString &zone)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone);
        return asyncCallWithArgumentList(QStringLiteral("getZoneSettings2"), argumentList);
    }

    inline QDBusPendingReply<QStringList> getZones()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getZones"), argumentList);
    }

    inline QDBusPendingReply<bool> queryForwardPort(const QString &zone, const QString &port, const QString &protocol, const QString &toport, const QString &toaddr)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(port) << QVariant::fromValue(protocol) << QVariant::fromValue(toport) << QVariant::fromValue(toaddr);
        return asyncCallWithArgumentList(QStringLiteral("queryForwardPort"), argumentList);
    }

    inline QDBusPendingReply<bool> queryIcmpBlock(const QString &zone, const QString &icmp)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(icmp);
        return asyncCallWithArgumentList(QStringLiteral("queryIcmpBlock"), argumentList);
    }

    inline QDBusPendingReply<bool> queryIcmpBlockInversion(const QString &zone)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone);
        return asyncCallWithArgumentList(QStringLiteral("queryIcmpBlockInversion"), argumentList);
    }

    inline QDBusPendingReply<bool> queryInterface(const QString &zone, const QString &interface)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(interface);
        return asyncCallWithArgumentList(QStringLiteral("queryInterface"), argumentList);
    }

    inline QDBusPendingReply<bool> queryMasquerade(const QString &zone)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone);
        return asyncCallWithArgumentList(QStringLiteral("queryMasquerade"), argumentList);
    }

    inline QDBusPendingReply<bool> queryPort(const QString &zone, const QString &port, const QString &protocol)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(port) << QVariant::fromValue(protocol);
        return asyncCallWithArgumentList(QStringLiteral("queryPort"), argumentList);
    }

    inline QDBusPendingReply<bool> queryProtocol(const QString &zone, const QString &protocol)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(protocol);
        return asyncCallWithArgumentList(QStringLiteral("queryProtocol"), argumentList);
    }

    inline QDBusPendingReply<bool> queryRichRule(const QString &zone, const QString &rule)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(rule);
        return asyncCallWithArgumentList(QStringLiteral("queryRichRule"), argumentList);
    }

    inline QDBusPendingReply<bool> queryService(const QString &zone, const QString &service)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(service);
        return asyncCallWithArgumentList(QStringLiteral("queryService"), argumentList);
    }

    inline QDBusPendingReply<bool> querySource(const QString &zone, const QString &source)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(source);
        return asyncCallWithArgumentList(QStringLiteral("querySource"), argumentList);
    }

    inline QDBusPendingReply<bool> querySourcePort(const QString &zone, const QString &port, const QString &protocol)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(port) << QVariant::fromValue(protocol);
        return asyncCallWithArgumentList(QStringLiteral("querySourcePort"), argumentList);
    }

    inline QDBusPendingReply<QString> removeForwardPort(const QString &zone, const QString &port, const QString &protocol, const QString &toport, const QString &toaddr)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(port) << QVariant::fromValue(protocol) << QVariant::fromValue(toport) << QVariant::fromValue(toaddr);
        return asyncCallWithArgumentList(QStringLiteral("removeForwardPort"), argumentList);
    }

    inline QDBusPendingReply<QString> removeIcmpBlock(const QString &zone, const QString &icmp)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(icmp);
        return asyncCallWithArgumentList(QStringLiteral("removeIcmpBlock"), argumentList);
    }

    inline QDBusPendingReply<QString> removeIcmpBlockInversion(const QString &zone)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone);
        return asyncCallWithArgumentList(QStringLiteral("removeIcmpBlockInversion"), argumentList);
    }

    inline QDBusPendingReply<QString> removeInterface(const QString &zone, const QString &interface)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(interface);
        return asyncCallWithArgumentList(QStringLiteral("removeInterface"), argumentList);
    }

    inline QDBusPendingReply<QString> removeMasquerade(const QString &zone)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone);
        return asyncCallWithArgumentList(QStringLiteral("removeMasquerade"), argumentList);
    }

    inline QDBusPendingReply<QString> removePort(const QString &zone, const QString &port, const QString &protocol)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(port) << QVariant::fromValue(protocol);
        return asyncCallWithArgumentList(QStringLiteral("removePort"), argumentList);
    }

    inline QDBusPendingReply<QString> removeProtocol(const QString &zone, const QString &protocol)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(protocol);
        return asyncCallWithArgumentList(QStringLiteral("removeProtocol"), argumentList);
    }

    inline QDBusPendingReply<QString> removeRichRule(const QString &zone, const QString &rule)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(rule);
        return asyncCallWithArgumentList(QStringLiteral("removeRichRule"), argumentList);
    }

    inline QDBusPendingReply<QString> removeService(const QString &zone, const QString &service)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(service);
        return asyncCallWithArgumentList(QStringLiteral("removeService"), argumentList);
    }

    inline QDBusPendingReply<QString> removeSource(const QString &zone, const QString &source)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(source);
        return asyncCallWithArgumentList(QStringLiteral("removeSource"), argumentList);
    }

    inline QDBusPendingReply<QString> removeSourcePort(const QString &zone, const QString &port, const QString &protocol)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(port) << QVariant::fromValue(protocol);
        return asyncCallWithArgumentList(QStringLiteral("removeSourcePort"), argumentList);
    }

    inline QDBusPendingReply<> setZoneSettings2(const QString &zone, const QVariantMap &settings)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(zone) << QVariant::fromValue(settings);
        return asyncCallWithArgumentList(QStringLiteral("setZoneSettings2"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void ForwardPortAdded(const QString &zone, const QString &port, const QString &protocol, const QString &toport, const QString &toaddr, int timeout);
    void ForwardPortRemoved(const QString &zone, const QString &port, const QString &protocol, const QString &toport, const QString &toaddr);
    void IcmpBlockAdded(const QString &zone, const QString &icmp, int timeout);
    void IcmpBlockInversionAdded(const QString &zone);
    void IcmpBlockInversionRemoved(const QString &zone);
    void IcmpBlockRemoved(const QString &zone, const QString &icmp);
    void InterfaceAdded(const QString &zone, const QString &interface);
    void InterfaceRemoved(const QString &zone, const QString &interface);
    void MasqueradeAdded(const QString &zone, int timeout);
    void MasqueradeRemoved(const QString &zone);
    void PortAdded(const QString &zone, const QString &port, const QString &protocol, int timeout);
    void PortRemoved(const QString &zone, const QString &port, const QString &protocol);
    void ProtocolAdded(const QString &zone, const QString &protocol, int timeout);
    void ProtocolRemoved(const QString &zone, const QString &protocol);
    void RichRuleAdded(const QString &zone, const QString &rule, int timeout);
    void RichRuleRemoved(const QString &zone, const QString &rule);
    void ServiceAdded(const QString &zone, const QString &service, int timeout);
    void ServiceRemoved(const QString &zone, const QString &service);
    void SourceAdded(const QString &zone, const QString &source);
    void SourcePortAdded(const QString &zone, const QString &port, const QString &protocol, int timeout);
    void SourcePortRemoved(const QString &zone, const QString &port, const QString &protocol);
    void SourceRemoved(const QString &zone, const QString &source);
    void ZoneOfInterfaceChanged(const QString &zone, const QString &interface);
    void ZoneOfSourceChanged(const QString &zone, const QString &source);
    void ZoneUpdated(const QString &zone, const QVariantMap &settings);
};

namespace org {
  namespace fedoraproject {
    using FirewallD1 = ::OrgFedoraprojectFirewallD1Interface;
    namespace FirewallD1 {
      using ipset = ::OrgFedoraprojectFirewallD1IpsetInterface;
      using policies = ::OrgFedoraprojectFirewallD1PoliciesInterface;
      using policy = ::OrgFedoraprojectFirewallD1PolicyInterface;
      using zone = ::OrgFedoraprojectFirewallD1ZoneInterface;
    }
  }
}
#endif
