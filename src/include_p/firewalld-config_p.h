#pragma once

#include "firewalld-config-zone.h"
#include "firewalld-config.h"
#include "firewalld_config_interface.h"

namespace firewalld::config {

class ConfigPrivate : public QObject {
  Q_OBJECT

public:
  explicit ConfigPrivate(Config *q);
  ~ConfigPrivate() override;
  void init();

  QString defaultZone;
  QString cleanupOnExit;
  QString cleanupModulesOnExit;
  QString lockdown;
  QString iPv6_rpfilter;
  QString individualCalls;
  QString logDenied;
  QString firewallBackend;
  QString flushAllOnReload;
  QString rFC3964_IPv4;
  QString nftablesFlowtable;
  QString nftablesCounters;

  OrgFedoraprojectFirewallD1ConfigInterface configIface_;
  Config *q_ptr;

  Q_DECLARE_PUBLIC(Config)

  QMap<QString, QSharedPointer<Zone>> zoneMap_;

  void propertyChanged(const QString &property, const QVariant &value);

public slots:
  void configHelperAdded(const QString &helper);
  void configIPSetAdded(const QString &ipset);
  void configIcmpTypeAdded(const QString &icmptype);
  void configPolicyAdded(const QString &policy);
  void configServiceAdded(const QString &service);
  void configZoneAdded(const QString &zone);

  void dbusPropertiesChanged(const QString &interfaceName,
                             const QVariantMap &properties,
                             const QStringList &invalidatedProperties);
};
} // namespace firewalld::config
