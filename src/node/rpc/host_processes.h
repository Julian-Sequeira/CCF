// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the Apache 2.0 License.
#pragma once

#include "node/rpc/host_processes_interface.h"

namespace ccf
{
  class HostProcesses : public AbstractHostProcesses
  {
  protected:
    AbstractNodeState& impl;

  public:
    HostProcesses(AbstractNodeState& impl_) : impl(impl_) {}

    void trigger_host_process_launch(
      const std::vector<std::string>& args) override
    {
      impl.trigger_host_process_launch(args);
    }
  };
}
