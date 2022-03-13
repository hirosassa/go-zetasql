#ifndef ZETASQL_PUBLIC_FUNCTIONS_UUID_EXPORT_H
#define ZETASQL_PUBLIC_FUNCTIONS_UUID_EXPORT_H

#include "zetasql/public/functions/uuid.h"

namespace zetasql {
  namespace functions {

    std::string GenerateUuid(absl::BitGenRef gen) {
      return "";
    }

  }
}

#include "go-zetasql/base/status/export.inc"
#include "go-absl/random/bit_gen_ref/export.inc"
#include "go-absl/random/random/export.inc"

#endif