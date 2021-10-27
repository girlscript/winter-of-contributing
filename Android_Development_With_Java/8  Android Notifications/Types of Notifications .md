# Notifications in Android Studio

Notifications are short timely messages received by the User to provide some information from the App.
The different types of Notifications that can be implemented in our Apps are :
* Simple Notification
* Big Text Style Notification
* Big Picture Style Notification
* Inbox Style Notification
* Notification Actions


## Simple Notification :
These are the most fundamental type of Notification which includes a title, a message body and a picture (optional).
The following code shows how one can implement this type of notification in their apps:

<p align="center">
    <img src="https://user-images.githubusercontent.com/79036525/135770019-32758287-0efe-4737-a147-35fdf98a214d.png">
 </p>


     NotificationCompat.Builder builder=new NotificationCompat.Builder(MainActivity.this)
                    .setSmallIcon(R.drawable.gwoc)
                    .setLargeIcon(BitmapFactory.decodeResource(getResources(),R.drawable.gwoc))
                    .setContentTitle("Simple Notifications")
                    .setContentText("This is the basic type of Notification")
                    .setAutoCancel(true)
                    .setDefaults(NotificationCompat.DEFAULT_ALL);

        Uri uri= RingtoneManager.getDefaultUri(RingtoneManager.TYPE_NOTIFICATION);
        builder.setSound(uri); // this is used to get sound on receiving the notification
        NotificationManager notificationManager=(NotificationManager) getSystemService(Context.NOTIFICATION_SERVICE);
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
            String channelId = "CHANNEL_ID";
            NotificationChannel channel = new NotificationChannel(channelId, "GWOC",
                    NotificationManager.IMPORTANCE_DEFAULT);
            notificationManager.createNotificationChannel(channel);
            builder.setChannelId(channelId);
            notificationManager.notify(0, builder.build());
        }
        
  ## Big Text Style Notification
  This type is used to create Notifications containing more than one line of text. The below code shows this type.
  
  <p align="center">
    <img src="https://user-images.githubusercontent.com/79036525/135770402-3764e207-a136-4a0f-83fb-624ed85b11ed.png">
 </p>
 
 
    public void showNotification(View view) {
          createNotificationChannel();
          NotificationCompat.Builder builder = new NotificationCompat.Builder(MainActivity.this, "Big Text Notification")
                  .setSmallIcon(R.drawable.gwoc)
                  .setLargeIcon(BitmapFactory.decodeResource(getResources(), R.drawable.gwoc))
                  .setContentTitle("Big Text Notifications")
                  .setStyle(new NotificationCompat.BigTextStyle().bigText("This is the second type of Notification"))
                  .setPriority(NotificationCompat.PRIORITY_DEFAULT);

        NotificationManagerCompat notificationManagerCompat = NotificationManagerCompat.from(getApplicationContext());
        notificationManagerCompat.notify(1, builder.build());
    }

    //create notification channel if you target android 8.0 or higher version
    private void createNotificationChannel() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
            CharSequence name = "BigTextStyle Notification";
            String description = "Includes all the BigTextStyle notification";
            int importance = NotificationManager.IMPORTANCE_DEFAULT;
            NotificationChannel notificationChannel = new NotificationChannel("Big Text Notification", name, importance);
            notificationChannel.setDescription(description);
            NotificationManager notificationManager = (NotificationManager) getSystemService(NOTIFICATION_SERVICE);
            notificationManager.createNotificationChannel(notificationChannel);
        }
    }
    
  ## Big Picture Style Notification :
  This type includes large pictures in the Notification on expanding it. This can be implemented using the following code:
  
  <p align="center">
    <img src="https://user-images.githubusercontent.com/79036525/135770609-27034e55-8aaf-4403-a3f6-772ee126d3f7.png">
 </p>
  

      public void showNotification(View view) {
            createNotificationChannel();
            Bitmap picture=BitmapFactory.decodeResource(getResources(), R.drawable.gwoc);
            NotificationCompat.Builder builder = new NotificationCompat.Builder(MainActivity.this, "Big Image Notification")
                    .setSmallIcon(R.drawable.gwoc)
                    .setLargeIcon(BitmapFactory.decodeResource(getResources(), R.drawable.gwoc))
                    .setContentTitle("Big Image Notifications")
                    .setStyle(new NotificationCompat.BigPictureStyle().bigPicture(picture))
                    .setPriority(NotificationCompat.PRIORITY_DEFAULT);

        NotificationManagerCompat notificationManagerCompat = NotificationManagerCompat.from(getApplicationContext());
        notificationManagerCompat.notify(1, builder.build());
    }

    //create notification channel if you target android 8.0 or higher version
    private void createNotificationChannel() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
            CharSequence name = "BigPictureStyle Notification";
            String description = "Includes all the BigPictureStyle notification";
            int importance = NotificationManager.IMPORTANCE_DEFAULT;
            NotificationChannel notificationChannel = new NotificationChannel("Big Image Notification", name, importance);
            notificationChannel.setDescription(description);
            NotificationManager notificationManager = (NotificationManager) getSystemService(NOTIFICATION_SERVICE);
            notificationManager.createNotificationChannel(notificationChannel);
        }
    }
  
  ## Inbox Style Notification :
  This is seen mostly in Chat Applications where all the messages from the other Users can be seen in the Notification.
  
   <p align="center">
    <img src="https://user-images.githubusercontent.com/79036525/135770843-e976e4e5-86a3-49ad-aad3-30db41452825.png">
 </p>

  
    public void showNotification(View view) {
          createNotificationChannel();
          NotificationCompat.Builder builder = new NotificationCompat.Builder(MainActivity.this, "Inbox Notification")
                  .setSmallIcon(R.drawable.gwoc)
                  .setLargeIcon(BitmapFactory.decodeResource(getResources(), R.drawable.gwoc))
                  .setContentTitle("5 New Chats")
                  .setStyle(new NotificationCompat.InboxStyle()
                  .addLine("Hi")
                  .addLine("How are you?")
                  .setSummaryText("+3 more"))
                  .setPriority(NotificationCompat.PRIORITY_DEFAULT);

        NotificationManagerCompat notificationManagerCompat = NotificationManagerCompat.from(getApplicationContext());
        notificationManagerCompat.notify(1, builder.build());
    }

    //create notification channel if you target android 8.0 or higher version
    private void createNotificationChannel() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
            CharSequence name = "Inbox Notification";
            String description = "Includes all the Inbox notification";
            int importance = NotificationManager.IMPORTANCE_DEFAULT;
            NotificationChannel notificationChannel = new NotificationChannel("Inbox Notification", name, importance);
            notificationChannel.setDescription(description);
            NotificationManager notificationManager = (NotificationManager) getSystemService(NOTIFICATION_SERVICE);
            notificationManager.createNotificationChannel(notificationChannel);
        }
    }
    
  ##  Notification Actions :
  Sometimes we need to perform a task directly from the Notification itself. In such cases we use the notification Actions.
  
   <p align="center">
    <img src="https://user-images.githubusercontent.com/79036525/135771070-882c18ed-fe90-443c-84cb-b164049d49a3.png">
 </p>

  
  
    NotificationCompat.Builder builder = new NotificationCompat.Builder(MainActivity.this)
                  .setSmallIcon(R.drawable.gwoc)
                  .setLargeIcon(BitmapFactory.decodeResource(getResources(), R.drawable.gwoc))
                  .setContentTitle("Action Buttons")
                  .setStyle(new NotificationCompat.BigTextStyle().bigText("Click view to visit Google"))
                  .setAutoCancel(true)
                  .setDefaults(NotificationCompat.DEFAULT_ALL);
          //the actions in a notification are handled through intent
          Intent intent = new Intent(Intent.ACTION_VIEW, Uri.parse("https://www.google.com"));
          PendingIntent pendingIntent = PendingIntent.getActivity(MainActivity.this, 0, intent, 0);

        builder.addAction(android.R.drawable.ic_menu_view, "VIEW", pendingIntent);

        Uri path = RingtoneManager.getDefaultUri(RingtoneManager.TYPE_NOTIFICATION);
        builder.setSound(path);

        NotificationManager notificationManager = (NotificationManager) getSystemService(Context.NOTIFICATION_SERVICE);

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
            String channelId = "CHANNEL_ID";
            NotificationChannel channel = new NotificationChannel(channelId, "Channel Title",
                    NotificationManager.IMPORTANCE_DEFAULT);
            notificationManager.createNotificationChannel(channel);
            builder.setChannelId(channelId);
        }
        notificationManager.notify(2, builder.build());
        
        
   This is how various types of Notifications can be viewed in our Apps.
   
   # _______________________________________________________________________________________________________________________________________________________________________
