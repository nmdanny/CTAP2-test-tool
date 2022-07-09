// Copyright 2019-2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "src/device_interface.h"

namespace fido2_tests {
  std::string DeviceIdentifiers::ToString() {
    std::stringstream ss;
    ss << "product_name: " << this->product_name << " manufacturer: " << this->manufacturer
       << " serial_number: " << this->serial_number << " vendor_id: " << this->vendor_id 
       << " product_id: " << this->product_id << " path: " << this->path;
    return ss.str();
  }
}

