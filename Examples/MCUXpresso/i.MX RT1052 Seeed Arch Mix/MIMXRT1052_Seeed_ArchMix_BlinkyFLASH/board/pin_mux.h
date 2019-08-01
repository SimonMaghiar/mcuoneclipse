/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/*! @brief Direction type  */
typedef enum _pin_mux_direction
{
  kPIN_MUX_DirectionInput = 0U,         /* Input direction */
  kPIN_MUX_DirectionOutput = 1U,        /* Output direction */
  kPIN_MUX_DirectionInputOrOutput = 2U  /* Input or output direction */
} pin_mux_direction_t;

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/* WAKEUP (coord L6), SW02 */
#define BOARD_INITPINS_SW02_GPIO                                           GPIO5   /*!< GPIO device name: GPIO5 */
#define BOARD_INITPINS_SW02_PORT                                           GPIO5   /*!< PORT device name: GPIO5 */
#define BOARD_INITPINS_SW02_PIN                                               0U   /*!< GPIO5 pin index: 0 */

/* GPIO_AD_B0_09 (coord F14), LED_R */
#define BOARD_INITPINS_LED_R_GPIO                                          GPIO1   /*!< GPIO device name: GPIO1 */
#define BOARD_INITPINS_LED_R_PORT                                          GPIO1   /*!< PORT device name: GPIO1 */
#define BOARD_INITPINS_LED_R_PIN                                              9U   /*!< GPIO1 pin index: 9 */

/* GPIO_AD_B0_10 (coord G13), LED_G */
#define BOARD_INITPINS_LED_G_GPIO                                          GPIO1   /*!< GPIO device name: GPIO1 */
#define BOARD_INITPINS_LED_G_PORT                                          GPIO1   /*!< PORT device name: GPIO1 */
#define BOARD_INITPINS_LED_G_PIN                                             10U   /*!< GPIO1 pin index: 10 */

/* GPIO_AD_B0_11 (coord G10), LED_B */
#define BOARD_INITPINS_LED_B_GPIO                                          GPIO1   /*!< GPIO device name: GPIO1 */
#define BOARD_INITPINS_LED_B_PORT                                          GPIO1   /*!< PORT device name: GPIO1 */
#define BOARD_INITPINS_LED_B_PIN                                             11U   /*!< GPIO1 pin index: 11 */


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
