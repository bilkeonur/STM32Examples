# STM32 Timer Example

## Debug Configuration
<img src="https://github.com/bilkeonur/STM32Examples/blob/main/Timer/images/Screen1.png" width="800">

## GPIO Configuration
<img src="https://github.com/bilkeonur/STM32Examples/blob/main/Timer/images/Screen3.png" width="800">

## Clock Configuration
<img src="https://github.com/bilkeonur/STM32Examples/blob/main/Timer/images/Screen3.png" width="800">

## Timer Configuration
<img src="https://github.com/bilkeonur/STM32Examples/blob/main/Timer/images/Screen4.png" width="800">
<img src="https://github.com/bilkeonur/STM32Examples/blob/main/Timer/images/Screen5.png" width="800">

## Sample Code

```C
//Add uint32_t cnt=0;
/* USER CODE BEGIN PV */
uint32_t cnt=0;
/* USER CODE END PV */

//Add Following Code
int main(void)
{
  /* USER CODE BEGIN 2 */

  HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
  HAL_Delay(100);
  HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);

  HAL_TIM_Base_Start_IT(&htim3);
  /* USER CODE END 2 */
}

//Add Following Code 
//16000000 (Crystal Osilator) / Counter Period + 1 (2) / Prescaler + 1 (8000) = 1ms Interrupt Time

/* USER CODE BEGIN 4 */
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	if (htim == &htim3)
	{
		cnt++;
		if(cnt==1000)
		{
			cnt=0;
			HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
		}
	}
}
/* USER CODE END 4 */

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
