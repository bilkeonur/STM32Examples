# STM32 Led Blink Example

## Circuit
<img src="https://github.com/bilkeonur/STM32Examples/blob/main/LedBlink/Images/Circuit.jpg" width="800">

## Debugger Connection
<img src="https://github.com/bilkeonur/STM32Examples/blob/main/LedBlink/Images/Connection.png" width="800">

## Clock Configuration
<img src="https://github.com/bilkeonur/STM32Examples/blob/main/LedBlink/Images/Screen1.png" width="800">
<img src="https://github.com/bilkeonur/STM32Examples/blob/main/LedBlink/Images/Screen4.png" width="800">

## Debug Configuration
<img src="https://github.com/bilkeonur/STM32Examples/blob/main/LedBlink/Images/Screen2.png" width="800">

## GPIO Configuration
<img src="https://github.com/bilkeonur/STM32Examples/blob/main/LedBlink/Images/Screen3.png" width="800">

## Sample Code

```C
while (1)
  {
	  HAL_Delay(1000);
	  HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);

     	  //Or
	  HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_SET);
	  HAL_Delay(100);
	  HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_RESET);
	  HAL_Delay(100);
  }
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


