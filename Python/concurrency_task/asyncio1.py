import asyncio

# Asynchronous function


async def boil_pasta():
    print("Start boiling pasta...")
    await asyncio.sleep(3)  # Simulate time it takes to boil pasta
    print("Pasta is done!")


async def make_salad():
    print("Start making salad...")
    await asyncio.sleep(1)  # Simulate time it takes to prepare salad
    print("Salad is done!")

# Run the tasks asynchronously


async def main():
    # Run both tasks concurrently
    await asyncio.gather(boil_pasta(), make_salad())

# Run the event loop
asyncio.run(main())
