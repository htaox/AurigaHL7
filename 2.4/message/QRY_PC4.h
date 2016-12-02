/*
 * This file is part of AurigaHL7.
 *
 * AurigaHL7 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * AurigaHL7 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with AurigaHL7.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __QRY_PC4__24_H__
#define __QRY_PC4__24_H__

#include "../../common/Util.h"
#include "../segment/MSH.h"
#include "../segment/QRD.h"
#include "../segment/QRF.h"

namespace HL7_24 {

/* QRY_PC4 */
struct QRY_PC4 : public HL7Message {
  QRY_PC4() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { QRY_PC4_MSH_1, QRY_PC4_QRD_2, QRY_PC4_QRF_4, FIELD_ID_MAX };

  const char* className() const { return "QRY_PC4"; }
  QRY_PC4* create() const { return new QRY_PC4(); }

 private:
  /* Initialize object */
  void init() {
    setName("QRY_PC4");
    addObject<MSH>(QRY_PC4_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<QRD>(QRY_PC4_QRD_2, "QRD.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<QRF>(QRY_PC4_QRF_4, "QRF.4", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, QRY_PC4_MSH_1);
  }
  QRD* getQRD_2(size_t index = 0) {
    return (QRD*)this->getObjectSafe(index, QRY_PC4_QRD_2);
  }
  QRF* getQRF_4(size_t index = 0) {
    return (QRF*)this->getObjectSafe(index, QRY_PC4_QRF_4);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, QRY_PC4_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRD_2(size_t index = 0) {
    try {
      return this->getObject(index, QRY_PC4_QRD_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRF_4(size_t index = 0) {
    try {
      return this->getObject(index, QRY_PC4_QRF_4) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* QRY_PC4_ */
} /* namespace HL7_24 */
#endif /*  __QRY_PC4__24_H__ */
