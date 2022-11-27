## Sample Code

```C
/* USER CODE BEGIN PV */
#include "ee.h"
#include "eeConfig.h"
/* USER CODE END PV */
```

```C
 /* USER CODE BEGIN 2 */
  ee_init();
  uint8_t dataWrite[4] = {13,15,17,41};
  uint8_t dataRead[4];
  ee_writeToRam(0,4,dataWrite);
  ee_commit();
  ee_read(0,4,dataRead);
  /* USER CODE END 2 */
```

# About The Author

### Onur BiLKE

#### Computer Engineer
#### Android & IOS & Backend Developer && Embedded System Designer

<a href="https://www.linkedin.com/in/onur-bilke-55b04275/"><img src="https://github.com/aritraroy/social-icons/blob/master/linkedin-icon.png?raw=true" width="60"></a>

# License

```
Copyright 2022 bilkeonur

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

   http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
```
