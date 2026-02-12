# 30-days-30-features-in-cpp

My target is to build one small feature daily every day for 30 continuous days from scratch using C++ language.

## 30 Features List - C++ Challenge

### Day 1 – ✅ Digital Wallet (Done!)
- Add, spend, check balance.
- Validate positive amounts and sufficient balance.

### Day 2 – Change Password Feature
- Validate old password.
- New password length ≥ 6.
- Confirm password match.

### Day 3 – Login Attempt Limiter
- Allow only 3 failed attempts before locking account for session.

### Day 4 – Discount Calculator with Coupon Validation
- Apply discount only if coupon code is valid and not expired.

### Day 5 – ATM Daily Withdrawal Limit
- Track daily withdrawal amount.
- Prevent exceeding ₹20,000/day limit.

### Day 6 – Electricity Bill Calculator (Slab-based)
- Calculate bill:
  - 0–100 units (₹2/unit)
  - 101–200 units (₹3/unit)
  - 200+ units (₹5/unit)

### Day 7 – Income Tax Calculator
- Apply tax:
  - 0–2.5L (0%)
  - 2.5–5L (5%)
  - 5–10L (20%)
  - 10L+ (30%)

### Day 8 – To-Do List: Add & Remove Tasks
- Prevent duplicate tasks.
- Display all tasks.
- Mark as complete.

### Day 9 – Shopping Cart: Add & Remove Items
- Calculate total price dynamically.
- Apply bulk discount if items > 5.

### Day 10 – Library: Book Issue & Return
- Prevent issuing already issued book.
- Track issue date.
- Calculate late fees.

### Day 11 – Voting System
- Prevent same user (by ID) from voting twice.
- Count votes for each candidate.

### Day 12 – Student Grade Manager: Find Topper
- Store student marks.
- Find highest scorer.
- Calculate class average.

### Day 13 – Parking Slot Allocator
- Assign first available slot (1–15).
- Mark occupied.
- Handle exit and free slot.

### Day 14 – Expense Tracker with Categories
- Track expenses by category (Food, Transport, etc.).
- Find highest expense.

### Day 15 – Contact Manager with Search
- Add contacts (name, phone).
- Search by partial name match.
- Delete contact.

### Day 16 – Simple Bank: Create Account
- Generate unique account number.
- Prevent duplicates.
- Store name & balance.

### Day 17 – Bank: Money Transfer Between Accounts
- Validate sender balance.
- Ensure receiver exists.
- Update both accounts atomically.

### Day 18 – Movie Seat Booking System
- Display seat layout (5x10 grid).
- Book seats.
- Prevent double booking.

### Day 19 – Inventory Stock Manager
- Add products.
- Reduce stock on sale.
- Prevent negative stock.
- Low-stock alerts.

### Day 20 – Auction: Highest Bid Tracker
- Accept bids only if higher than current highest.
- Display bid history.

### Day 21 – Ride Matching System (Basic)
- Match first available driver to passenger based on location proximity.

### Day 22 – Leaderboard System
- Add players with scores.
- Sort by score (descending).
- Display top 5.

### Day 23 – Task Scheduler with Priority
- Tasks have priority (1–5).
- Execute highest priority first (priority queue).

### Day 24 – Order Status Workflow
- Valid transitions: Pending → Confirmed → Shipped → Delivered.
- Reject invalid jumps.

### Day 25 – Undo Feature for Wallet
- Maintain transaction history (stack).
- Undo last transaction.
- Redo if needed.

### Day 26 – Save & Load Wallet Data (File I/O)
- Save balance and transactions to file.
- Load on startup.
- Persist data.

### Day 27 – Notification System with Thresholds
- Send alert when wallet balance < ₹100.
- Send email/notification when expense > ₹5000.

### Day 28 – Account Lock After Suspicious Activity
- Lock account after 3 failed login attempts.
- Lock on unusual transaction patterns.

### Day 29 – Subscription Auto-Renewal
- Deduct monthly fee (₹99) automatically if balance sufficient.
- Notify user if balance is insufficient.

### Day 30 – E-Commerce Checkout Flow
- Cart → Apply Coupon → Payment → Order Confirmation.
- Full validation chain.

