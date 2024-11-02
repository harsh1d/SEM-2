async def send_telegram_message(self, bot, chat_id, message):
        await bot.send_message(chat_id=chat_id, text=message)